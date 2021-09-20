#include<iostream>
using namespace std;

int M, N, x, y;

int gcd(int a, int b){ // 유클리드 호제법
    while (b!=0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        cin >> M >> N >> x >> y;
        int ans = -1;
        int end = lcm(M,N); // M과 N의 최소공배수 해가 카잉 달력의 마지막 해이다.

        // <x,y>에 의해 표현되는 해가 입력으로 주어졌다면,
        // 그 해는 x 또는 x + k*M (k는 상수)일 것이다.
        for (int i = x; i <= end; i += M)
        {
            if ((!(i % N) && N == y) || i % N == y) // i % N이 0이면 i는 0이 아니고 N의 배수이고, 따라서 y 는 N이어야 한다.(y의 범위가 1이상 이므로 0일수 없음)
            { // i % N이 0이 아니면 y는 i % N 과 같아야 한다.
                ans = i;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}