#include<iostream>
#include<string>
using namespace std;
int arr[64][64];

string result(int r, int c, int len){
    if (len==1)
    {
        return to_string(arr[r][c]);
    }
    else
    {
        string s1 = result(r,c,len/2);
        string s2 = result(r,c+len/2,len/2);
        string s3 = result(r+len/2,c,len/2);
        string s4 = result(r+len/2,c+len/2,len/2);

        if (s1 == s2 && s2 == s3 && s3 == s4)
        {
            if (s1.size() == 1) 
                return s1;
            else return "(" + s1 + s2 + s3 + s4 + ")"; // s1 = s2 = s3 = s4 = (1010) 같은 경우 ((1010)(1010)(1010)(1010)) 으로 리턴해주어야 한다.
        }
        return "(" + s1 + s2 + s3 + s4 + ")";
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    char temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> temp;
            arr[i][j] = temp - '0';
        }
    }

    cout << result(0,0,N);
    return 0;
}