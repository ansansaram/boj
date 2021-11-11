#include<iostream>
using namespace std;
int main(){
    int S, T, D;
    cin >> S >> T >> D;
    int F = (D / (2 * S)) * T;
    cout << F;
    return 0;
}