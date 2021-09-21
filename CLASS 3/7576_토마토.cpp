#include<iostream>
#include<queue>
using namespace std;

int M, N;
int box[1000][1000];

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

queue<pair<pair<int,int>,int>> q;

int BFS(){
    int max = 0;

    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cnt = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {  
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < M)
            {
                if (box[nx][ny] == 0)
                {
                    q.push({{nx,ny},cnt + 1});
                    box[nx][ny] = 1;
                    max = cnt + 1;
                }
            }
        }
    }
    

    bool isAllGood = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (box[i][j] == 0)
            {
                isAllGood = false;
                break;
            }
        }
        if (!isAllGood)
        {
            break;
        }
    }
    
    if (isAllGood)
    {
        return max;
    }
    else return -1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> box[i][j];
            if (box[i][j] == 1)
            {
                q.push({{i,j},0});
            }
        }
    }



    cout << BFS();

    return 0;
}