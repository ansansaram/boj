#include<iostream>
#include<stack>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;
    
    stack<int> st;

    while (N--)
    {
        string s;
        cin>>s;
        if (s == "push")
        {
            int X;
            cin>>X;
            st.push(X);
        }
        else if (s == "pop")
        {
            if (st.empty()) cout << -1 << "\n";
            else {cout << st.top() << "\n"; st.pop();}
        }
        else if (s == "size")
        {
            cout << st.size() << "\n";
        }
        else if (s == "empty")
        {
            if(st.empty()) cout<<1;
            else cout<<0;

            cout<<"\n";
        }
        else if (s == "top")
        {
            if (st.empty()) cout<<-1;
            else cout << st.top();
            
            cout << "\n";
        }
    }
    
    return 0;
}