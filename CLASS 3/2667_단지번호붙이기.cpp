#include<iostream>
#include<queue>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int board[25][25];
bool visited[25][25];
int N;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int BFS(int x, int y){
    int cnt = 1;
    queue<pair<int, int> > q;
    q.push(make_pair(x,y));

    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N)
            {
                if (board[nx][ny] && !visited[nx][ny])
                {
                    visited[nx][ny] = true;
                    q.push(make_pair(nx,ny));
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    memset(board,0,sizeof(board));
    memset(visited,false,sizeof(visited));

    cin >> N;

    char temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> temp;
            board[i][j] = temp - '0';
        }   
    }

    int cnt = 0;
    vector<int> v;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (board[i][j] && !visited[i][j]) // 방문하지 않은 집이 있는 경우
            {
                visited[i][j] = true; // 방문표시 해주고
                cnt++; // 단지수 +1 해주고
                v.push_back(BFS(i,j)); // BFS 돌린다.
                // BFS 결과 같은 단지 내의 집이 모두 방문 표시 된다.
            }
        }
    }
    

    cout << cnt << "\n"; // 단지 수 출력

    sort(v.begin(),v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n"; // 각 단지 내 집의 수 출력
    }

    return 0;
}