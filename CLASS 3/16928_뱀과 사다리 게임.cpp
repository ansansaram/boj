#include<iostream>
#include<queue>
using namespace std;

int arr[101];
queue<pair<int,int>> q;
bool visited[101];
int dn[6] = {1,2,3,4,5,6};
int BFS(int n){
    q.push({n,0});

    while (!q.empty())
    {
        n = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (n == 100)
        {
            return cnt;
        }
        
        for (int i = 0; i < 6; i++)
        {
            int nn = n + dn[i];
            if (nn >= 1 && nn <= 100)
            {
                if (!visited[arr[nn]])
                {
                    visited[arr[nn]] = true;
                    q.push({arr[nn],cnt + 1});
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill_n(arr,101,0);
    fill_n(visited,101,false);
    for (int i = 1; i <= 100; i++)
    {
        arr[i] = i;
    }
    int N, M;
    cin >> N >> M;

    while (N--)
    {
        int from, to;
        cin >> from >> to;
        arr[from] = to;
    }
    while (M--)
    {
        int from, to;
        cin >> from >> to;
        arr[from] = to;
    }
    
    cout << BFS(1);

    return 0;
}