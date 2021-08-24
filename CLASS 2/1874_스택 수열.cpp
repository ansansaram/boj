#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    int n;
    cin>>n;

    stack<int> S;
    queue<char> Q;
    
    int idx = 1;
    
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        while(idx<=num){ // 스택에 숫자 push는 딱 n번 된다.
            S.push(idx);
            Q.push('+');
            idx++;
        }

        if (S.top() == num)
        {
            S.pop();
            Q.push('-');
        }
        else {
            cout<<"NO";
            return 0;
        }
        
    }
    
    
    while (!Q.empty()) 
    {
        cout << Q.front() << "\n";
        Q.pop();
    }

    return 0;
}
