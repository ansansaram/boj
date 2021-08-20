#include<iostream>
using namespace std;

int main(){
    int t,k,n;

    cin>>t;

    int arr[15][15]={0,};

    for (int i = 1; i <= 14; i++)
    {
        arr[0][i] = i;
    }
    for (int i = 0; i <= 14; i++)
    {
        arr[i][1] = 1;
    }

    for (int i = 1; i <= 14; i++)
    {
        for (int j = 2; j <= 14; j++)
        {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    
    
    

    while (t--)
    {
        cin>>k>>n;
        cout<<arr[k][n]<<'\n';
    }
    


    return 0;
}