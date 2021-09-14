    #include<iostream>
    using namespace std;

    int N, M;
    bool arr[1001][1001] = {false};
    bool visited[1001] = {false};
    void DFS(int num){
        visited[num] = true;

        for (int i = 1; i <= N; i++)
        {
            if(arr[num][i] && !visited[i])
            {
                DFS(i);
            }
        }
        return ;
    }
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);

        int cnt = 0;
        cin >> N >> M;
        while (M--)
        {
            int u, v;
            cin >> u >> v;
            arr[u][v] = true;
            arr[v][u] = true;
        }
        
        for (int i = 1; i <= N; i++)
        {
            if (!visited[i])
            {
                cnt++;
                DFS(i);
            }    
        }

        cout << cnt;
        return 0;
    }
