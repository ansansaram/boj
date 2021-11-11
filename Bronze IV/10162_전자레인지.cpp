#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    if (T % 10 != 0)
    {
        cout << -1;
    }
    else
    {
        int A, B, C;
        A = T / 300;
        T %= 300;
        B = T / 60;
        T %= 60;
        C = T / 10;
        cout << A << " " << B << " " << C;
    }
    return 0;
}