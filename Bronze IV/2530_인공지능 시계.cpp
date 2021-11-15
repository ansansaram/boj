#include<iostream>
using namespace std;
int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int sum = 60 * 60 * A + 60 * B + C + D;
    int h, m, s;
    s = sum % 60;
    sum /= 60;
    m = sum % 60;
    sum /= 60;
    h = sum % 24;
    cout <<  h << " " << m << " " << s;
    return 0;
}