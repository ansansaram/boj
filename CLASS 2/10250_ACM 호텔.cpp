#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    while (T--)
    {
        int h,w,n;
        cin>>h>>w>>n;
        
        if (n%h==0)
        {
            cout<<h*100+n/h<<"\n";
        }
        else
        {
            cout<<(n%h)*100 + n/h + 1 <<"\n";
        }
    }
        
    return 0;
}