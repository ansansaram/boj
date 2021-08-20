#include<iostream>
using namespace std;

int main(){
    int arr[10];
    arr[0]=0;


    int max=-1, idx=0;
    for (int i = 1; i <= 9; i++)
    {
        cin>>arr[i];
        if (max<arr[i])
        {
            max=arr[i];
            idx=i;
        }
    }
    
    cout<<max<<"\n"<<idx;


    return 0;
}