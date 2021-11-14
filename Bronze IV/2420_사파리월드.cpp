#include<iostream>
using namespace std;
int main(){
    long long N, M;
    cin >> N >> M;
    if (N < M)
    {
        cout << M - N;
    }
    else cout << N - M;
    
    return 0;
}