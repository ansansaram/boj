#include<iostream>

using namespace std;

bool S[21];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill_n(S,21,false);

    int M;
    cin >> M;

    while (M--)
    {
        string op;
        cin >> op;
        int x;
        if (op == "add")
        {
            cin >> x;
            S[x] |= true;
        }
        else if (op == "remove")
        {
            cin >> x;
            S[x] &= false;
        }
        else if (op == "check")
        {
            cin >> x;
            if (S[x]) cout << "1\n";
            else cout << "0\n";
        }
        else if (op == "toggle")
        {
            cin >> x;
            S[x] = !S[x];
        }
        else if (op == "all")
        {
            for (int i = 1; i <= 20; i++)
            {
                S[i] |= true;
            }
        }
        else // op == "empty"
        {
            for (int i = 1; i <= 20; i++)
            {
                S[i] &= false;
            }
        }
    }
    


    return 0;
}