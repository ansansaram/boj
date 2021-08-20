#include<iostream>
using namespace std;
int factorial(int n){
    int res = 1;


    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }

    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin>>N>>K;

    cout<< factorial(N) / factorial(N-K) / factorial(K);

    return 0;
}

