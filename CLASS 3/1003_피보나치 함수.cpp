/*
            f0 호출 횟수    f1 호출 횟수    fibo 값
        f0  1               0               0
        f1  0               1               1
        f2  1               1               1
        f3  1               2               2
        f4  2               3               3
        f5  3               5               5
        f6  5               8               8
        f7  8               13              13
        ...
        f(n)의 f(1) 호출 횟수는 f(n) 값과 같다.
        f(n)의 f(0) 호출 횟수는 f(n-1)의 f(1) 호출 횟수와 같고, 그 말은 즉 f(n-1) 값과 같다. (n = 0 인 경우는 예외로 1번 호출한다.)
*/

#include<iostream>
using namespace std;

int dp[41];

int fibonacci(int n){
    if (n == -1)
    {
        return 1; // 입력값 n이 0인 경우, 예외로 1번 호출 된다.
    }
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else
    {
        if (dp[n] != NULL)
        {
            return dp[n];
        }
        else
        {
            dp[n] = fibonacci(n-2) + fibonacci(n-1);
        }
        return dp[n];
    }
    
    
    


}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    dp[0] = 0;
    dp[1] = 1;
    while (T--)
    {
        int num;
        cin >> num;
        cout << fibonacci(num-1) << " " << fibonacci(num) << "\n";
    }
    

    return 0;
}