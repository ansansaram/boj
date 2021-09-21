#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int L;
    cin >> L;
    vector<int> v(L);
    for (int i = 0; i < L; i++)
    {
        cin >> v[i];
    }
    int n;
    cin >> n;

    sort(v.begin(),v.end());
    if(v[v.size()-1] == n){
        cout << 0;
    } 
    else if (n < v[0])
    {
        cout << n * (v[0] - n) - 1;
    }
    
    for (int i = 0; i < v.size()-1; i++)
    {
        if (v[i] < n && n < v[i+1])
        {
            cout << (n-v[i]) * (v[i+1] - n) - 1;
            break;
        }
        else if (v[i] == n)
        {
            cout << 0;
            break;
        }
        
    }
    

    return 0;
}