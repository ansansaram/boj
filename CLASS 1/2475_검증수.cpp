#include<iostream>
using namespace std;

int main(){
    int ans = 0; // 검증수

    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin>>temp;
        ans = (ans+(temp*temp))%10;
    }
    


    cout<<ans;

    return 0;
}