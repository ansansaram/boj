#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    if (a>b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    int gcd;

    for (int i = a; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }
    
    cout << gcd << "\n" << a * b / gcd;
    

    return 0;
}