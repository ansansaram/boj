#include<iostream>
using namespace std;

int getScore(string s){
    int score=0;
    int consecutiveScore=0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='O')
        {
            if (s[i-1]=='O')
            {
                consecutiveScore++;
            }
            else consecutiveScore=0;
            
            score++;
            score+=consecutiveScore;
        }
        
    }
    return score;
}

int main(){
    int T;
    cin>>T;

    while (T--)
    {
        string s;
        cin>>s;
        cout<<getScore(s)<<"\n";
    }
    
    

    return 0;
}