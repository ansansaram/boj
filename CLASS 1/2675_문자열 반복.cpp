#include<iostream>
#include<string>
using namespace std;

int main(){
    int T;
    
    cin>>T;

    for (int i = 0; i < T; i++)
    {
        int R;
        cin>>R;
        string S;
        cin>>S;
        
        for (int j = 0; j < S.length(); j++) // 입력받은 문자를 순서대로 출력하되,
        {
            for (int k = 0; k < R; k++) // 각 문자 S[j]를 R번 연속 출력
            {
                cout<<S[j];
            }
            
        }
        cout<<"\n";
    }
    


    return 0;
}