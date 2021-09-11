/*
    우선순위 큐의 기본 구조가 MAX Heap으로 구현되어 있다.
*/
#include<iostream>
#include<queue>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int> Q;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if (temp)
            Q.push(temp);
        else{
            if (Q.empty())
                cout << 0 << "\n";
            else{
                cout << Q.top() << "\n";
                Q.pop();
            }
        }
    }
    return 0;
}