#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

ll arr[10001] = {0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K, N;
    cin >> K >> N;

    ll maxLength = 0; // N개를 만들 수 있는 랜선의 최대 길이

    ll maxInput = 0; // 입력 받은 랜선 중 최대 길이
    for (int i = 0; i < K; i++)
    {
        cin >> arr[i];
        if (maxInput <= arr[i])
        {
            maxInput = arr[i];
        }
    }
    
    ll low = 1;
    ll high = maxInput;

    while (low<=high)
    {
        ll mid = (low + high) / 2;
        int sum = 0;
        for (int i = 0; i < K; i++)
        {
            sum += arr[i]/mid; // sum : 길이 mid로 자를 때 랜선의 개수
        }
        if (sum >= N) // 길이 mid 짜리 랜선을 N개 만들 수 있는 경우
        {             
            if (maxLength < mid) // 현재까지의 최대길이보다 mid가 길면 Update
            {
                maxLength = mid;
            }
            low = mid + 1; // mid 보다 큰 범위에서 재탐색
        }
        else high = mid - 1; // 만들 수 없는 경우 mid 보다 작은 범위에서 재탐색
    }
    
    cout << maxLength;

    return 0;
}