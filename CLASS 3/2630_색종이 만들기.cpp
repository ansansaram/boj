#include<iostream>
using namespace std;

int arr[129][129]={0};
int white = 0, blue = 0;

void square(int row, int col, int len){
    if (len == 1)
    {
        if (arr[row][col]) blue++;
        else white++;
        return ;
    }
    else
    {
        bool isMonochrome = true;
        int leftTopColor = arr[row][col];
        for (int i = row; i < row + len; i++)
        {
            for (int j = col; j < col + len; j++)
            {
                if (arr[i][j] != leftTopColor)
                {
                    isMonochrome = false;
                    break;
                }
                
            }
            if (!isMonochrome)
            {
                break;
            }
        }
        if (!isMonochrome)
        {
            square(row,col,len/2);
            square(row,col+len/2,len/2);
            square(row+len/2,col,len/2);
            square(row+len/2,col+len/2,len/2);
        }
        else
        {
            if (arr[row][col]) blue++;
            else white++;
            return ;
        }
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
    square(0,0,N);

    cout << white << "\n" << blue;
    return 0;
}