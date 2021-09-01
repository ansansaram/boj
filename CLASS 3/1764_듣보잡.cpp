#include<iostream>
#include<set>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    set<string> listenX;
    set<string> seeX;
    
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        listenX.insert(s);
    }
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        seeX.insert(s);
    }
    set<string>::iterator iter;
    int cnt = 0;
    set<string> result;
    while (!listenX.empty())
    {
        iter = seeX.find(*listenX.begin());
        if (iter != seeX.end())
        {
            result.insert(*iter);
            cnt++;
        }
        listenX.erase(listenX.begin());
    }
    
    cout << cnt << "\n";
    while (!result.empty())
    {
        cout << *result.begin() << "\n";
        result.erase(result.begin());
    }
    
    
    return 0;
}