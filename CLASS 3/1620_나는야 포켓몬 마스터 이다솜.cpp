#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    map<string, int> poMonNum;
    map<int, string> poMonName;

    for (int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        poMonNum.insert(pair<string, int>(name, i+1));
        poMonName.insert(make_pair(i+1,name));
    }

    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        if ('0' <= s[0] && s[0] <= '9') cout << poMonName[stoi(s)] << "\n";
        else cout << poMonNum[s] << "\n";
    }
    return 0;
}