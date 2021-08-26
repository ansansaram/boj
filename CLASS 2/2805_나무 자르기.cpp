#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin>>N>>M;
    vector<int> v(N);

    for (int i = 0; i < N; i++)
    {
        cin>>v[i];
    }
    
    int cutterLength = 0;

    sort(v.begin(),v.end());

    int low = 0, high = v[N-1];

    int mid;

    while (low <= high)
    {
        long long sum = 0;
        mid = (low + high) / 2;

        for (int i = 0; i < N; i++)
        {
            if (v[i] >= mid)
            {
                sum += (v[i]-mid);
            }
        }
        if (sum >= M) // 자른 길이 합이 M보다 크면 
        {
            cutterLength = mid; // 절단기의 길이를 mid로

            low = mid + 1; // 절단기의 길이가 더 길어도 조건 만족 할 수 있으므로 low값을 증가시킨다.
        }
        else high = mid - 1; // 자른 길이 합이 M보다 작으면 절단기가 너무 긴 상태.
        
    }
    cout << cutterLength;

    return 0;
}