#include<iostream>
using namespace std;
int main(){
    bool dp[1001];  

    fill_n(dp,1001,true);

    dp[1] = false;
    for (int i = 2; i <= 1000; i++)
    {
        int j = i*2;
        while (j<=1000)
        {
            if (dp[j])
            {
                dp[j]=false;
            }
            j += i;
        }
    }
    
    int n;
    cin>>n;

    int cnt = 0;
    while (n--)
    {
        int temp;
        cin>>temp;
        if (dp[temp])
        {
            cnt++;
        }
    }
    cout<<cnt;
    
    return 0;
}