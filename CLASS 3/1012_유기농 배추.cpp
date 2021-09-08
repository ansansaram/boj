#include<iostream>
#include<cstring> // memset 함수 내장
using namespace std;

int arr[50][50];
bool visited[50][50]; // 방문했으면 true
int dx[] = {-1,1,0,0}; // 인접한 원소 확인 위한 배열 
int dy[] = {0,0,1,-1}; 
int N, M, K;
void DFS(int row, int col){
    visited[row][col] = true; // 해당 배추밭 방문 표시
    for (int i = 0; i < 4; i++) // 배추밭 위, 아래, 왼쪽, 오른쪽에 인접한 배추밭 있는지 체크
    {
        int nx = row + dx[i];
        int ny = col + dy[i];
        if (0 <= nx && nx < N && 0 <= ny && ny < M) // 인덱스가 배추밭의 범위 내에 있어야 함
        {
            if (arr[nx][ny] && !visited[nx][ny]) // 배추밭에 배추 있고 방문한 적 없는 경우
            {
                DFS(nx,ny); // 그 배추밭 기준으로 DFS
            }
        }
        else continue;
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        memset(arr, 0, sizeof(arr)); // 배추밭 배열 0으로 초기화
        memset(visited, false, sizeof(visited)); // 방문 여부 false로 초기화
        
        cin >> N >> M >> K;
        
        while(K--)
        {
            int X, Y;
            cin >> X >> Y;
            arr[X][Y] = 1;
        }

        int cnt = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (arr[i][j] && !visited[i][j]) // 배추 있고 방문한 적 없는 경우
                {
                    cnt++; 
                    DFS(i, j);
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}