#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        ans *= 16;
        if ('A' <= s[i] && s[i] <= 'F')
        {
            ans += (s[i]-'A'+10);
        }
        else
        {
            ans += (s[i]-'0');
        }
    }
    
    cout << ans;

    return 0;
}