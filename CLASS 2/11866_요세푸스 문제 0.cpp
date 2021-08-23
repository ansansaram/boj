#include<iostream>
#include<queue>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;

    queue<int> Q;
    for (int i = 1; i <= N; i++)
    {
        Q.push(i);
    }

    cout << "<";

    while (true)
    {
        for (int i = 0; i < K-1; i++)
        {
            Q.push(Q.front());
            Q.pop();
        }
        cout<<Q.front();
        Q.pop();
        if(Q.empty()) break;
        else cout<<", ";
    }

    cout<< ">";
    
    
    

    return 0;
}