#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    
    int m;
    cin>>m;
    vector<int> w;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        w.push_back(temp);
    }
    
    for (int i = 0; i < m; i++)
    {
        int res = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j]==w[i])
            {
                res = 1;
                break;
            }
        }
        cout<<res<<"\n";
    }
    
    return 0;
}