#include<iostream>
using namespace std;

int arr[10001] = {0,};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K,N;
    cin>>K>>N;
    
    int totalLength = 0;

    for (int i = 0; i < K; i++)
    {
        cin>>arr[i];
        totalLength+=arr[i];
    }

    int maxLength = totalLength/N;

    while (true)
    {
        int shareSum = 0;
        for (int i = 0; i < K; i++)
        {
            shareSum += arr[i]/maxLength;
        }
        
        if(shareSum == N) {cout<< maxLength; break;}
        else maxLength--;
    }
    
    return 0;
}