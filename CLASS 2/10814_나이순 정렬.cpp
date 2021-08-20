/*
    stable sort를 이용한 풀이
    stable sort : 원래의 순서를 손상시키지 않으면서 정렬하는 것.
*/

#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool compare(pair<int,string> p1, pair<int,string>p2){
    return p1.first<p2.first;
}
int main(){
    int n;
    cin>>n;

    pair<int,string> profile;

    vector<pair<int,string> > members;

    for (int i = 0; i < n; i++)
    {
        cin>>profile.first>>profile.second;
        members.push_back(profile);
    }

    stable_sort(members.begin(),members.end(),compare);
    
    for (int i = 0; i < n; i++)
    {
        cout<< members[i].first<<" "<<members[i].second<<"\n";
    }
    
    


    return 0;
}