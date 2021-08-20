#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int rmdr[42]={0,};
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
        rmdr[arr[i]%42]++;
    }

    int cnt = 0;
    
    for (int i = 0; i < 42; i++)
    {
        if (rmdr[i]!=0)
        {
            cnt++;
        }
        
    }
    

    cout<<cnt;

    return 0;
}