/*
    최빈값에서 막힌다.
*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int freq[8001]={0,}; // -4000~-1, 0, 1~4000
    vector<int> arr(n);

    int sum=0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        freq[arr[i]+4000]++; // -4000이 freq[0]에, 0이 freq[4000]에, 4000이 freq[8000]에 대응된다.
    }
    
    
    sort(arr.begin(),arr.end());

    int avg= round(1.0 * sum / n);
    int cnt = arr[n/2];
    int mode = -1; 
    for (int i = 0; i < 8001; i++)
    {
        if (mode<freq[i])
        {
            mode = i;
        }
    }
    
    int range = arr[n-1] - arr[0];
    
    cout<<avg<<" "<<cnt<<" "<<mode-4000<<" "<<range;

    return 0;
}