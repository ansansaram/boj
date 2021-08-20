#include<iostream>
#include<string>
using namespace std;

int main(){
    int A,B,C;

    cin>>A>>B>>C;

    string res = to_string(A*B*C);

    int cnt[10]={0,};
    
    for (int i = 0; i < res.length(); i++)
    {
        cnt[res[i]-'0']++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<cnt[i]<<"\n";
    }
    
    

    return 0;
}