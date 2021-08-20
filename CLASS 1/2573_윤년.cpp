#include<iostream>
using namespace std;

int main(){
    int y;
    cin >> y;
    bool isLeapYear=false;

    if (y%4==0)
    {
        isLeapYear=true;
        if (y%100==0&&y%400!=0)
        {
            isLeapYear=false;
        }
    }
    
    if (isLeapYear) cout<<1;
    else cout<<0;
    

    return 0;
}