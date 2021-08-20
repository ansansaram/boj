#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N;
    vector<double> score;
    // vector<double> new_score;
    cin>>N;
    int M=-1;

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin>>temp;
        if (M<temp)
        {
            M=temp;
        }
        
        score.push_back(temp);
    }
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        
            score[i] = score[i]/M*100;
            sum+=score[i];
        
    }
    
    cout<<sum/N;

    return 0;
} 
