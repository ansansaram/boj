#include<iostream>
#include<map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;

    map<string, string> repos;

    for (int i = 0; i < N; i++)
    {
        string site, pw;
        cin >> site >> pw;
        repos.insert(make_pair(site,pw));
    }
    for (int i = 0; i < M; i++)
    {
        string site;
        cin >> site;
        cout << repos[site] << "\n";
    }

    return 0;
}