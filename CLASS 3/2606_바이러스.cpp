/*
    BFS
*/
#include<iostream>
#include<queue>
using namespace std;

int board[101][101] = {0,};
bool visit[101];
int node, edge;
int cnt = 0;

void BFS(int start){
    visit[start] = true;
    queue<int> Q;
    Q.push(start);
    while (!Q.empty())
    {
        int cur = Q.front(); Q.pop();
        for (int i = 1; i <= node; i++)
        {
            if (board[cur][i] == 1 && !visit[i])
            {
                visit[i] = true;
                Q.push(i);
                cnt++;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill_n(visit,101,false);
    cin >> node >> edge;

    for (int i = 0; i < edge; i++)
    {
        int x, y;
        cin >> x >> y;
        board[x][y] = board[y][x] = 1;
    }

    BFS(1);

    cout << cnt;
    return 0;
}