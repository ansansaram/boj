#include<iostream>
using namespace std;

int main(){
    int sum, difference;
    cin >> sum >> difference;

    
    if ((sum+difference)%2!=0 || sum<difference)
    {
        cout << -1;
        return 0;
    }
    else
    {
        cout << (sum+difference)/2 << " " << (sum-difference)/2;
    }
    

    return 0;
}