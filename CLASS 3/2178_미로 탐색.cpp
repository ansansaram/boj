#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

int N, M;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int board[100][100];
bool visited[100][100];

queue<pair<pair<int,int>, int> > q;

int BFS(int x, int y, int cnt){
    q.push(make_pair(make_pair(x,y),cnt));
    visited[x][y] = true;

    while (!q.empty())
    {
        x = q.front().first.first;
        y = q.front().first.second;
        cnt = q.front().second;
        if (x == N-1 && y == M-1)
        {
            break;
        }
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < M)
            {
                if (board[nx][ny] && !visited[nx][ny])
                {
                    q.push(make_pair(make_pair(nx,ny),cnt + 1));
                    visited[nx][ny] = true;
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

    cin >> N >> M;

    char temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> temp;
            board[i][j] = temp - '0';
        }
    }
    cout << BFS(0,0,1);
    return 0;
}