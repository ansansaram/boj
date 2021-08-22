#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> arr;

bool binarySearch(int start, int end, int target){
    if (start>end) // index의 순서가 뒤바뀐 경우 -> 못 찾았다는 의미
    {
        return false;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == target) // target이 찾는 구간의 중앙값에 있는 경우
        return true;
    else if (arr[mid] < target) // 중앙보다 오른쪽 범위에 있는 경우
        return binarySearch(mid+1, end, target);
    else  // 중앙보다 왼쪽 범위에 있는 경우
        return binarySearch(0, mid-1, target);
    
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,M;

    cin>>N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());

    cin>>M;
    for (int i = 0; i < M; i++)
    {
        int target;
        cin>>target;
        if (binarySearch(0,N-1,target))
        {
            cout<<"1\n";
        }
        else cout<<"0\n";
    }
    
    
    return 0;
}