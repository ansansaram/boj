#include<iostream>

using namespace std;

int coin[10]={0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> coin[i];
    }
    
    int cnt = 0;

    for (int i = N-1; i >= 0 && K != 0; i--)
    {
        if (K/coin[i])
        {
            cnt += K/coin[i];
            K %=coin[i];
        }
    }
    
    cout << cnt;

    return 0;
}