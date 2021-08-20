#include<iostream>
#include<stack>
using namespace std;

int main(){
    
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
                if (st.top()=='(')
                {
                    st.pop();
                }
                else {ans = "no"; break;}
            }
            else if (s[i]==']')
            {
                if (st.top()=='[')
                {
                    st.pop();
                }
                
            }
            
            
            
        }
        cout<<ans<<"\n";
    }
    



    return 0;
}