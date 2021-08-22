#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int idx[8001]={0,}; // 입력되는 정수의 범위 -4000~-1, 0, 1~4000 의 각 정수가 몇번씩 나타나는지 체크하는 배열
    vector<int> arr(n);

    int sum=0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        idx[arr[i]+4000]++; // -4000이 idx[0]에, 0이 idx[4000]에, 4000이 idx[8000]에 대응된다. 
    }
    
    
    sort(arr.begin(),arr.end());

    int avg= round(1.0 * sum / n);
    int cnt = arr[n/2];
    int freq= -1; // 최빈값의 빈도수 체크하는 변수 ex) 3이 5번 나왔고 가장 많은 횟수이다. -> freq = 5
    for (int i = 0; i < 8001; i++)
    {
        if (freq<idx[i])
        {
            freq = idx[i];
        }
    }
    int freqCnt = 0; // 같은 빈도수를 갖는 최빈값이 2개 이상인 경우를 체크하는 변수
    int mode; // 최빈값
    for (int i = 0; i < 8001; i++)
    {
        if (idx[i]==freq) // 최빈값에 해당하는 경우
        {
            mode = i; // 실제 최빈값은 mode - 4000 이다.
            freqCnt++; 
            if (freqCnt == 2) // 최빈값이 두 개 이상인 경우 두번째로 작은 값을 출력
            {
                break;
            }
        }
    }
    
    
    int range = arr[n-1] - arr[0];
    
    cout << avg << " " << cnt << " " << mode - 4000 << " " << range;

    return 0;
}