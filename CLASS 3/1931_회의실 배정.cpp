/*
    정렬 기준
    1. 종료 시간 기준 오름차순
    2. 종료 시간 같은 경우 시작 시간 기준 오름차순
    특정 시점마다 그때까지의 완수한 task가 가장 많도록 하기 위함.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int, int> v1, pair<int,int> v2){
    if (v1.second == v2.second)
        return v1.first<v2.first;
    else return v1.second<v2.second;
}
int dp[100001] = {0};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int N;
    cin >> N;

    vector<pair<int, int> > v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    
    sort(v.begin(),v.end(),cmp);
    int cnt = 0;
    int time = 0;
    for (int i = 0; i < N; i++)
    {
        if (time<=v[i].first)
        {
            cnt++;
            time = v[i].second;
        }
    }
    
    cout << cnt;
    return 0;
}