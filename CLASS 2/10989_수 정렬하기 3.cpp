/*
    이전에도 똑같이 틀렸었다.
    ios::sync_with_stdio(0);
    cin.tie(0);
    두 줄 써주어야 시간 내에 수행된다.
*/
#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    int arr[10001]={0,};

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin>>temp;
        arr[temp]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        while (arr[i]--)
        {
            cout<<i<<"\n";
        }
    }
    
    
    return 0;
}