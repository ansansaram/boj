#include<iostream>
using namespace std;

int main(){
    int start;
    cin>>start;

    if (start == 1)
    {
        for (int i = 2; i <= 8; i++)
        {
            int next;
            cin>>next;
            if (next!=i)
            {
                cout<<"mixed";
                return 0;
            }
        }
        cout<<"ascending";
    }
    else if (start == 8)
    {
        for (int i = 7; i >= 1; i--)
        {
            int next;
            cin>>next;
            if (next!=i)
            {
                cout<<"mixed";
                return 0;
            }
        }
        cout<<"descending";
    }
    else cout<<"mixed";
    
    return 0;
}