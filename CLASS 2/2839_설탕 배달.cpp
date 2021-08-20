#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[5001];
    fill_n(arr,5001,-1);

    arr[3] = 1;
    arr[4] = 9999;
    arr[5] = 1;
    arr[6] = 2;
    arr[7] = 9999;
    for (int i = 8; i <= 5000; i++)
    {
        arr[i] = min(arr[i-3], arr[i-5]) + 1;
    }
    arr[4] = -1;
    arr[7] = -1;
    cout<<arr[N];


    return 0;
}