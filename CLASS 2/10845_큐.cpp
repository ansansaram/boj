#include<iostream>
#include<queue>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    queue<int> q;

    while (N--)
    {
        string s;
        cin>>s;
        if (s == "push")
        {
            int X;
            cin>>X;
            q.push(X);
        }
        else if (s == "pop")
        {
            if (q.empty()) cout << -1 << "\n";
            else {cout << q.front() << "\n"; q.pop();}
        }
        else if (s == "size")
        {
            cout << q.size() << "\n";
        }
        else if (s == "empty")
        {
            cout << q.empty() << "\n";
        }
        else if (s == "front")
        {
            if(q.empty()) cout << -1 << "\n";
            else cout << q.front() << "\n";
        }
        else
        {
            if(q.empty()) cout << -1 << "\n";
            else cout << q.back() << "\n";
        }
    }
    

    return 0;
}