/*

    ceil 함수 return type : double
    therefore, need to use (int) ceil(~~~).

*/

#include<iostream>
using namespace std;

int main(){
    int A,B,V;
    cin>>A>>B>>V;

    int res;

    res = (V - A) % (A - B) == 0 ? (V - A) / (A - B) + 1 : (V - A) / (A - B) + 1 + 1;

    cout<< res;

    return 0;
}