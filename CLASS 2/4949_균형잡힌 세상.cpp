#include<iostream>
#include<stack>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true)
    {
        string s;
        getline(cin,s);
        if (s.size()==1)
        {
            break;
        }
        
        stack<char> st;
        string ans = "yes";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='(' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else if (s[i]==')')
            {
                if (st.empty() || st.top()!='(')
                {
                    ans="no"; break;
                }
                else st.pop();
            }
            else if (s[i]==']')
            {
                if (st.empty() || st.top()!='[')
                {
                    ans = "no"; break;
                }
                else st.pop();
            }
        }

        if (!st.empty())
        {
            ans = "no";
        }
        
        cout<<ans<<"\n";
    }

    return 0;
}