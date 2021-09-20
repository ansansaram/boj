/*
    3차원 배열 BFS
    pair, tuple 이용
    현재 설정에서 컴파일시 g++ filename.cpp -std=c++17로 해야 컴파일에러 안뜬다.
    if(-1) == true!
    if(0) == false!
    if(1) == true!
    0이 아닌 값은 모두 결과가 true이다.
*/
#include<iostream>
#include<tuple>
#include<queue>
using namespace std;


int box[100][100][100] = {0,};
int M, N, H;
int dx[6] = {1,-1,0,0,0,0};
int dy[6] = {0,0,1,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};
queue<pair<tuple<int,int,int>,int>> q;

int BFS(){
    int max = 0;
    while (!q.empty())
    {
        int x = get<0>(q.front().first);
        int y = get<1>(q.front().first);
        int z = get<2>(q.front().first);
        int cnt = q.front().second;

        q.pop();

        for (int i = 0; i < 6; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < M && nz >= 0 && nz < H)
            {
                if (box[nx][ny][nz] == 0)
                {
                    q.push({{nx,ny,nz},cnt + 1});
                    max = cnt + 1;
                    box[nx][ny][nz] = 1;
                }
            }            
        }
    }

    bool isAllGood = true;
    for (int k = 0; k < H; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if(box[i][j][k] == 0){ isAllGood = false; break;} // BFS 돌린 결과 안 익은 토마토가 있는 경우
            }
            if(!isAllGood) break;
        }
        if (!isAllGood) break;
    }
    if (isAllGood)
    {
        return max;
    }
    else
    {
        return -1;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> M >> N >> H;

    for (int k = 0; k < H; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cin >> box[i][j][k];
                if (box[i][j][k] == 1)
                {
                    q.push({{i,j,k},0});
                }   
            }
        }
    }

    cout << BFS();
    
    return 0;
}