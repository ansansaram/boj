#include<iostream>
using namespace std;

int main(){
    int L, P;
    cin >> L >> P;
    int participant = L * P;

    for (int i = 0; i < 5; i++)
    {
        int input;
        cin >> input;
        cout << input - participant << " ";
    }
    

    return 0;
}