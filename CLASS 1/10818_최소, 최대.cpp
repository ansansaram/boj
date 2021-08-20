#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    int min = 1000001;
    int max = -1000001;

    int arr[1000001];


    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        if (min>arr[i])
        {
            min=arr[i];
        }
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    


    



    cout<<min<<" "<<max;

    return 0;
}