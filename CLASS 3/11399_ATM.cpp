#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());

    ll total = 0;

    for (int i = 0; i < n; i++)
    {
        total += (n-i)*arr[i];
    }
    
    cout << total;
    return 0;
}