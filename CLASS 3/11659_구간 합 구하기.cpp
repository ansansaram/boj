#include<iostream>
using namespace std;
int cumulative[100001] = {0};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> cumulative[i];
        cumulative[i] += cumulative[i-1]; // cumulative[i] : 1번째 수부터 i번째 수 까지의 누적 합
    }
    while (M--)
    {
        int i, j;
        cin >> i >> j;
        cout << cumulative[j] - cumulative[i-1] << "\n"; 
        /*
            4번째 수 부터 7번째 수 까지의 합
                = 1번째 수 부터 7번째 수 까지의 합 - 1번째 수 부터 3번째 수 까지의 합
                = cumulative[7] - cumulative[3]
        */
    }
    return 0;
}