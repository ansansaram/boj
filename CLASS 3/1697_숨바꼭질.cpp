/*
    BFS
*/

#include<iostream>
#include<queue>
using namespace std;

#define MAX 100001
bool visited[MAX] = {false};
int N, K;

queue<pair<int,int> > q;

int BFS(int N, int K){
    q.push(make_pair(N, 0));
    visited[N] = true;

    while (!q.empty())
    {
        int pos = q.front().first;
        int time = q.front().second;
        q.pop();

        if (pos == K)
        {
            return time;
        }
        if (pos + 1 < MAX && !visited[pos+1])
        {
            q.push(make_pair(pos + 1, time + 1));
            visited[pos + 1] = true;
        }
        if (pos - 1 >= 0 && !visited[pos-1])
        {
            q.push(make_pair(pos - 1, time + 1));
            visited[pos - 1] = true;
        }
        if (pos * 2 < MAX && !visited[pos * 2])
        {
            q.push(make_pair(pos * 2, time + 1));
            visited[pos * 2] = true;
        }
    }
    return 0;
}


int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cin >> N >> K;

    cout << BFS(N, K);
    return 0;
}