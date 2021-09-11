/*
    마이너스가 하나라도 나오면 그 뒤 숫자는 모두 빼주면 된다.
    10 - 20 - 20 + 20 + 20 + 20 => 10 - 20 - (20 + 20 + 20 + 20) = -90
    10 - 20 + 20 + 20 + 20 + 20 => 10 - (20 + 20 + 20 + 20 + 20) = -90
    10 - 20 + 20 - 20 + 20 - 20 => 10 - (20 + 20) - (20 + 20) - 20 = -90
    전부 최솟값이 -90이다.
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    
    int ans = 0;
    string val = "";
    bool isMinus = false;
    for (int i = 0; i < s.size(); i++) // 여기 i <= s.size()로 바꾸고
    {
        if (s[i] == '+' || s[i] == '-') // || s[i] == '\0' 추가해주면 마지막 숫자 따로 처리 안해주어도 됨.
        {
            if (isMinus) ans -= stoi(val);
            else ans += stod(val);
            

            if (s[i] == '-') isMinus = true;
            val = "";
            continue;
        }
        else val += s[i];
    }

    // 마지막 숫자를 계산이 안 된 상태이므로 처리.
    if (isMinus) ans -= stoi(val);
    else ans += stoi(val);

    cout << ans;
    return 0;
}