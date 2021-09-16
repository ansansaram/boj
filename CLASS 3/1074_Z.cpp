/*
    사분면으로 보면
    제2사분면 -> 제1사분면 -> 제3사분면 -> 제4사분면 순으로 순회한다.

    그냥 재귀로 cnt 1씩 증가시키면 시간초과난다.

    r행c열이 몇사분면에 위치하는지를 이용하자.
*/
#include<iostream>
#include<cmath> // pow 함수
using namespace std;

int N, r, c;
int cnt = 0;
void Z(int row, int col, int len){
    if (len == 1) // len=1이면 반드시 row = r, col = c이다.
    {
        return ;
    }
    
    // 모든 영역을 순회할 필요 없음
    if (r < row + len/2 && c < col + len/2) // r행 c열이 현재 영역 기준 2사분면에 있는 경우 순회 우선순위가 1순위. len -> len/2로 다시 탐색
    {
        Z(row, col, len/2);
    }
    else if (r < row + len/2 && c >= col + len/2) // 1사분면에 있는 경우 cnt에 2사분면의 크기만큼 더한다.
    {
        cnt += (len/2)*(len/2);
        Z(row, col + len/2, len/2);
    }
    else if (r >= row + len/2 && c < col + len/2) // 3사분면에 있는 경우 cnt에 2, 1사분면의 크기만큼 더한다.
    {
        cnt += 2 * (len/2) * (len/2);
        Z(row + len/2, col, len/2);
    }
    else // 4사분면에 있는 경우 cnt에 2, 1, 3사분면의 크기만큼 더한다
    {
        cnt += 3 * (len/2) * (len/2);
        Z(row + len/2, col + len/2, len/2);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> r >> c;

    int len = (int)pow(2,N);
    Z(0,0,len);

    cout <<cnt;

    return 0;
}