#include<iostream>
using namespace std;

int dp[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;

    for (int i = 4; i <= N; i++)
    {
        if (i%6==0)
        {
            dp[i] = min(min(dp[i/2],dp[i/3]),dp[i-1]) + 1;
        }
        else if (i%2==0)
        {
            dp[i] = min(dp[i/2],dp[i-1]) + 1;
        }
        else if (i%3==0)
        {
            dp[i] = min(dp[i/3],dp[i-1]) + 1;
        }
        else dp[i] = dp[i-1] + 1;
    }
    
    cout << dp[N];

    return 0;
}