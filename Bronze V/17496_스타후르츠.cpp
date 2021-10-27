#include<iostream>
using namespace std;
int main(){
    int N, T, C, P;
    cin >> N >> T >> C >> P;
    
    cout << P * ((N - 1) / T) * C;

    return 0;
}