#include<iostream>
using namespace std;

bool isPrimeNumber[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;
    cin >> N >> M;
    fill_n(isPrimeNumber,1000001,true);
    isPrimeNumber[0] = false;
    isPrimeNumber[1] = false;
    isPrimeNumber[2] = true;
    for (int i = 2; i <= 1000000; i++)
    {
        if (isPrimeNumber[i])
        {
            for (int j = 2*i; j <= 1000000; j = j + i)
            {
                isPrimeNumber[j] = false;
            }
        }
    }
    for (int i = N; i <= M; i++)
    {
        if (isPrimeNumber[i])
        {
            cout << i <<"\n";
        }   
    }
    return 0;
}