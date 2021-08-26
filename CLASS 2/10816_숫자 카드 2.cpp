/*
    algorithm STL
    lower_bound(arr, arr+N, number) : 하한, number와 같거나 큰 것 중 첫 번째 index
    upper_bound(arr, arr+N, number) : 상한, number보다 큰 것 중 첫 번째 index
    따라서, upper_bound - lower_bound : 배열 내의 찾는 number의 개수
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,M;

    cin>>N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cin>>M;
    while (M--)
    {
        int target;
        cin>>target;

        cout << upper_bound(arr.begin(),arr.begin()+N, target) - lower_bound(arr.begin(),arr.begin()+N,target) << " ";
    }
    

    return 0;
}