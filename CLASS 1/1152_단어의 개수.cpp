#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s); // 공백 포함한 문자열 입력
    int cnt=0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==' ')
        {
            cnt++;
        }
        
    }
    if (s[0]==' ')
    {
        cnt--; // 맨 앞 문자가 공백인 경우
    }
    if (s[s.length()-1]==' ')
    {
        cnt--; // 맨 뒤 문자가 공백인 경우
    }
    cnt++; // 공백을 카운트 하였고, 단어 개수 = 공백 개수 + 1 이다.
    
    


    cout<<cnt;
    
    return 0;
}