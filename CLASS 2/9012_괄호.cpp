#include<iostream>
#include<stack>
using namespace std;

int main(){
    int N;
    cin>>N;

    bool isVPS;

    while (N--)
    {
        string s;
        cin>>s;
        
        isVPS = true;

        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                st.push('(');
            }
            else if (st.empty() || st.top()!='(') // 문자 ')'인데 스택 비어있거나 top이 (이 아닌경우 쌍을 이루지 못함)
            {
                isVPS = false;
                break;
            }
            else st.pop();
        
        }
        if (!st.empty())
        {
            isVPS = false;
        }
        

        if (isVPS) cout<<"YES\n";
        else cout<<"NO\n";
    }
    


    return 0;
}