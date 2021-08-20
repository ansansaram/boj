#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,M;
    cin>>N>>M;

    char board[51][51]= {' ',};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin>>board[i][j];
        }
    }

    int ans=65;

    for (int i = 0; i <= N-8; i++)
    {
        for (int j = 0; j <= M-8; j++)
        {
            int even_W=0,odd_W=0;

            for (int k = i; k < i+8; k++)
            {
                for (int l = j; l < j+8; l++)
                {
                    if ((k+l)%2)
                    {
                        if (board[k][l]=='W')
                        {
                            odd_W++;
                        }
                    }
                    else
                    {
                        if (board[k][l]=='W')
                        {
                            even_W++;
                        }
                    }
                }
            }
                ans = min(min(odd_W+(32-even_W),even_W+(32-odd_W)),ans);
        }
        
    }
    
    
    cout<<ans;
    
    return 0;
}