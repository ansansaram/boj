#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    while (true)
    {
        cin>>a>>b>>c;
        if (a==0&&b==0&&c==0)
        {
            break;
        }
        if (c>a&&c>b)
        {
            if (c*c == a*a + b*b)
            {
                cout<<"right\n";
            }
            else cout<<"wrong\n";
        }
        else if (b>a&&b>c)
        {
            if (b*b == a*a + c*c)
            {
                cout<<"right\n";
            }
            else cout<<"wrong\n";
        }
        else
        {
            if (a*a == b*b + c*c)
            {
                cout<<"right\n";
            }
            else cout<<"wrong\n";
            
        }
    }

    return 0;
}