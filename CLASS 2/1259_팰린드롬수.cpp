#include<iostream>
using namespace std;

int main(){
    string N;
    string ans;
    while (true)
    {
        ans = "yes";
        cin>>N;
        if (N=="0")
        {
            break;
        }

        for (int i = 0; i < N.length()/2; i++)
        {
            if (N[i]!=N[N.length()-1-i])
            {
                ans = "no";
            }
        }
        
        cout<<ans<<'\n';

        
    }
    


    return 0;
}