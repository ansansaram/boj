#include<iostream>
using namespace std;

int main(){
    int A,B;
    int reverse_A, reverse_B;
    cin>>A>>B;

    reverse_A = (A%10)*100 + A/10 % 10 * 10 + A/100; 
    reverse_B = (B%10)*100 + B/10 % 10 * 10 + B/100;

    if (reverse_A>reverse_B) cout<<reverse_A;
    else cout<<reverse_B;
    
    
    return 0;
}