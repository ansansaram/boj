/*
    피보나치 유형의 문제는 long long으로 dp배열 만들자.
*/
#include<iostream>
using namespace std;
typedef long long ll;
ll dp[101] = {0};

ll solve(int n){
    if (0 <= n && n <= 5)
    {
        return dp[n];
    }
    else
    {
        if (dp[n] != 0)
        {
            return dp[n];
        }
        else
        {
            dp[n] = solve(n-1) + solve(n-5);
            return dp[n];
        }   
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    while (T--)
    {
        int n;
        cin >> n;
        cout << solve(n) << "\n";
    }
    
    return 0;
}