#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, I;
    cin >> A >> I;
    int ans = A * I;

    while ((int)(ceil(ans * 1.0 / A)) == I)
    {
        ans--;
    }
    
    cout << ans + 1;
    return 0;
}