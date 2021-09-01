/*
    i번째 계단을 밟는 경우의 수
    1) i-2번째 계단을 밟고 i번째 계단을 밟는다.
        -> dp[i-2] + arr[i]
    2) i-3번째 계단을 밟고 i-1번째 계단을 밟고 i번째 계단을 밟는다.
        -> dp[i-3] + arr[i-1] + arr[i]
    중 큰 값을 dp[i] 에 저장한다.
*/
#include<iostream>
#include<vector>
using namespace std;

int dp[301];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> arr(N+1);
    arr[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    
    dp[0] = 0;
    dp[1] = arr[1];
    dp[2] = dp[1] + arr[2];
    for (int i = 3; i <= N; i++)
    {
        dp[i] = max(dp[i-2], dp[i-3] + arr[i-1]) + arr[i];
    }
    
    cout << dp[N];

    return 0;
}