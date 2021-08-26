/*
    틀린 풀이. 갖고 있는 랜선 중 최대길이 부터 시작하여 몫을 다 더한 것이 필요한 랜선 N보다 큰지 비교하는 방식
    선형 탐색이라 시간초과 난다. 탐색 시간 log(N)인 이진탐색으로 풀어야 한다.
    또한, 입력값이 0 ~ 2^31 - 1이므로 길이 변수들은 long long으로 선언하자.
*/

#include<iostream>
using namespace std;

int arr[10001] = {0,};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K,N;
    cin>>K>>N;
    
    int maxLength=0;
    for (int i = 0; i < K; i++)
    {
        cin>>arr[i];
        if (maxLength<arr[i])
        {
            maxLength=arr[i];
        }
        
    }
    while (true)
    {
        int shareSum = 0;
        for (int i = 0; i < K; i++)
        {
            shareSum += arr[i]/maxLength;
        }
        
        if(shareSum == N) {cout<< maxLength; break;}
        else maxLength--;
    }
    
    return 0;
}