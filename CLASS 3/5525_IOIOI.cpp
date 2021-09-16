#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<char> S;
    
    int N, M;
    cin >> N >> M;

    string p;

    p = "I";
    for (int i = 0; i < N; i++)
    {
        p+="OI";
    }
    
    for (int i = 0; i < M; i++)
    {
        char temp;
        cin >> temp;
        S.push_back(temp);
    }
    
    int cnt = 0;
    string cmp;
    for (int i = 0; i < M-(2*N+1); i++)
    {
        cmp="";
        for (int j = i; j < i + (2*N+1); j++)
        {
            cmp+=S[j];
        }
        if (cmp == p)
        {
            cnt++;
        }
    }
    
    cout <<cnt;

    

    return 0;
}