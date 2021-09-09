#include<iostream>
using namespace std;

int arr[2188][2188]={0};    // N의 최댓값 3^7 = 2187
int zero_cnt = 0;           // 0으로 채워진 종이 개수
int plus_cnt = 0;           // 1로 채워진 종이 개수
int minus_cnt = 0;          // -1로 채워진 종이 개수

void solve(int startingRow, int startingCol, int len){
    int initVal = arr[startingRow][startingCol];
    if (len == 1)
    {
        if (initVal == -1)
            minus_cnt++;
        else if (initVal == 0)
            zero_cnt++;
        else
            plus_cnt++;

        return ; 
    }
    bool checker = true;
    for (int i = startingRow; i < startingRow+len; i++)
    {
        for (int j = startingCol; j < startingCol+len; j++)
        {
            if (arr[i][j]!= initVal)
            {
                checker = false;
                break;
            }
        }
        if (!checker)
        {
            break;
        }
    }
    if (!checker)   // 범위 내의 모든 종이가 한 숫자로 채워져 있지 않은 경우
    {
        solve(startingRow,startingCol,len/3);
        solve(startingRow,startingCol+len/3,len/3);
        solve(startingRow,startingCol+2*len/3,len/3);
        solve(startingRow+len/3,startingCol,len/3);
        solve(startingRow+len/3,startingCol+len/3,len/3);
        solve(startingRow+len/3,startingCol+2*len/3,len/3);
        solve(startingRow+2*len/3,startingCol,len/3);
        solve(startingRow+2*len/3,startingCol+len/3,len/3);
        solve(startingRow+2*len/3,startingCol+2*len/3,len/3);
    }
    else{   // 범위 내의 모든 종이가 한 숫자로 채워진 경우
        if(initVal == -1)
            minus_cnt++; 
        else if(initVal == 0)
            zero_cnt++;
        else if(initVal == 1)
            plus_cnt++;

        return ;
    }
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    

    solve(0,0,N);

    cout << minus_cnt << "\n" << zero_cnt << "\n" << plus_cnt;

    return 0;
}