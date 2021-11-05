#include<iostream>
using namespace std;
int main(){
    int ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        if (temp == n)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}