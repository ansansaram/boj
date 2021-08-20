#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2){
    if (p1.first == p2.first)
    {
        return p1.second < p2.second;
    }
    else return p1.first < p2.first;
    
}

int main(){
    int n;
    cin>>n;

    pair<int,int> position;

    vector<pair<int,int> > v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),cmp);
    
    for (int i = 0; i < n; i++)
    {
        cout<< v[i].first<<" "<<v[i].second<<"\n";
    }
    

    return 0;
}