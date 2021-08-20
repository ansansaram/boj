/*

    pow의 return type : double || float
    mod의 성질 활용하여 그 때 그 때 mod 취해준다.
    결과값이 커지므로 long long으로 선언

*/
#include<iostream>

using namespace std;

const int MOD = 1234567891;
const int MULTIPLY = 31;

int main(){
    int L;
    string s;
    cin>>L>>s;

    long long res = 0;
    long long R = 1;
    for (int i = 0; i < L; i++)
    {
        res = (res + (s[i] - 'a' + 1 ) * R) % MOD; // % 연산이 가장 마지막에 진행되어야 한다.
        R = R * MULTIPLY % MOD;
    }
    

    cout<<res;
    
    return 0;
}