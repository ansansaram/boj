#include<iostream>
#include<vector>

using namespace std;

int arr[501][501] = {0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,M,B; // N : 세로, M : 가로, B : 초기 인벤토리 크기
    cin>>N>>M>>B;

    int t = __INT_MAX__, h = -1; // t : 시간, h : 높이

    int minHeight = 257;
    int maxHeight = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] > maxHeight)
            {
                maxHeight = arr[i][j];
            }
            else if (arr[i][j] < minHeight)
            {
                minHeight = arr[i][j];
            }
        }
    }
    

    for (int i = minHeight; i <= maxHeight; i++)
    {
        int add = 0, remove = 0;
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                if (arr[j][k] > i)
                {
                    remove += (arr[j][k] - i);
                }
                else if (arr[j][k] < i)
                {
                    add += (i - arr[j][k]);
                }
            }
        }
        if (remove + B >= add) // 높이 i 로 땅 고르기가 가능한 경우
        {
            int time = 2 * remove + 1 * add;
            if (time <= t) // 등호 붙여야 하는 이유 : 걸리는 시간 동일한 경우 높이가 가장 높은값 출력
            {
                t = time;
                h = i;
            }
        }
        else ;
    }
    cout << t << " " << h;

    return 0;
}