#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    
    int ans;
    if (N % 2 == 0)
    {
        ans=(N / 2 + 1) * (N / 2 + 1);
    }
    else{
        ans=(N / 2 + 1) * (N / 2 + 2);
    }
    cout << ans;
    return 0;
}

