/*
    플로이드-워셜 알고리즘
*/
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int arr[101][101];

int N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(arr,0,sizeof(arr));
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x][y] = arr[y][x] = 1;
    }

    // 이 부분이 플로이드 워셜 알고리즘으로 각 정점간의 최단거리 찾는 부분
    for (int k = 1; k <= N; k++)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (i==j) continue;
                else if (arr[i][k] && arr[k][j])
                {
                    if (!arr[i][j] || arr[i][j] > arr[i][k] + arr[k][j]) arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }
    
    int answer;
    int kevNum = 1000000;
    for (int i = 1; i <= N; i++)
    {
        int sum = 0;
        for (int j = 1; j <= N; j++)
        {
            sum += arr[i][j];
        }
        if (sum < kevNum)
        {
            kevNum = sum;
            answer = i;
        }
        
    }
    
    cout << answer;

    

    return 0;
}