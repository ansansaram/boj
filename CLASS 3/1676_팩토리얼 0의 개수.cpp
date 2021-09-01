/*
    5의 배수 마다 +1
    25의 배수 마다 +1
    125의 배수 마다 +1
*/
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int cnt = 0;
    
    cnt += (N/5);
    cnt += (N/25);
    cnt += (N/125);

    cout << cnt;

    return 0;
}