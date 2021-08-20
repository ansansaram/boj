/*

    영어 대문자의 아스키코드 : 65(A) ~ 90(Z)
    영어 소문자의 아스키코드 : 97(a) ~ 122(z)

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int cnt[26]={0,};

    for (int i = 0; i < s.length(); i++)
    {
        if (97<=s[i]&&s[i]<=122)
        {
            cnt[s[i]-97]++;
        }
        else cnt[s[i]-65]++;
    }
    // cnt[0] : 문자열 내 a(A)의 개수
    // ...
    // cnt[25] : 문자열 내 z(Z)의 개수

    int max = -1;
    int idx = -1;
    char ans;

    for (int i = 0; i < 26; i++)
    {
        if (max<cnt[i]) // 조건문이 <= 이 아니고 < 이므로 max값 중복되는 경우 idx 수정 안된다.
        {
            max=cnt[i];
            idx=i; // max가 두개 이상이면 idx는 max값을 갖는 문자 중 가장 앞에 있는 문자를 가리킨다.
        }    
    }

    for (int i = 25; i >= 0; i--) // 뒤에서부터 탐색한다는 점을 주의
    {
        if (cnt[i]==max)
        {
            if (idx==i) // max값을 갖는 문자중 가장 앞 문자를 가리키므로 이 조건이 만족한다면 max값을 갖는 문자가 유일하다.
            {
                ans = 'A'+i; // 그 문자 대문자로 출력
                break;
            }
            else ans='?'; break; // idx와 i가 일치하지 않는다 == max값 갖는 문자가 두 개 이상이다.
        }
        
    }
    
    cout<<ans;

    return 0;
}