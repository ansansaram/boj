#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int dp[1000001];
    fill_n(dp,1000001,-1);

    dp[1]=1;

    int i = 1;

    while (i<=N)
    {
        int temp = i;

        dp[i] = temp;
        while (temp)
        {
            dp[i]+=temp%10;
            temp/=10;
        }
        

        if(dp[i]==N){
            cout<<i<<"\n";
            return 0;
        }
        i++;
    }
    cout<<0<<'\n';
    
    return 0;
}