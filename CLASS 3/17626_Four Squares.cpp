/*
    dp[27] 구하는 과정

    dp[1*1] + dp[26] = 1 + dp[26]
    dp[2*2] + dp[23] = 1 + dp[23]
    dp[3*3] + dp[18] = 1 + dp[18]
    dp[4*4] + dp[11] = 1 + dp[11]
    dp[5*5] + dp[2] = 1 + dp[2]
    
    중에서 가작 작은 수가 dp[27]이다.
*/

#include<iostream>
using namespace std;

int dp[50001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[1] + dp[i-1];
        for (int j = 2; j*j <= i; j++)
        {
            dp[i] = min(dp[i], 1 + dp[i-j*j]);
        }
    }
    cout << dp[n];
    return 0;
}