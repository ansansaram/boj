/*
    one by one 대조해보는 브루트포스 알고리즘 사용함.
    단순 2차원 배열 대신 pair 사용하여도 된다.
    ex) pair<int,int> arr[50];
*/
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    
    int physical[100][2];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>physical[i][j];
        }
    }

    int rank;

    for (int i = 0; i < N; i++)
    {
        int rank = 1;
        for (int j = 0; j < N; j++)
        {
            if (j == i)
            {
                continue; // 자기자신과는 비교해 볼 필요 없음
            }
            if (physical[i][0]<physical[j][0] && physical[i][1]<physical[j][1]) // 누군가가 나보다 키와 몸무게가 모두 크면
            {
                rank++; // 나의 랭킹은 1등수 밀려난다.
            }
        }
        cout<<rank<<" ";
    }
    return 0;
}