#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    N-=1;

    int i = 0;

    while (true)
    {
        N = N - 6*i;
        if (N<1)
        {
            cout<<i+1;
            return 0;
        }
        i++;
    }
    
    return 0;
}
