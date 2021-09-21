/*
    우선순위 큐의 선언시에 
    세번째 파라미터를 지정하여
    내가 원하는 대로 우선순위를 정해줄 수 있다.
    디폴트는 내림차순이고
    세번째 인자가 greate<int>라면 오름차순이다.
    
    연산자 오버로딩을 통해 원하는 대로 구현도 가능한데
    이 때 세번째 인자인 cmp는 함수가 아닌 구조체이다. 
    
    참고 : https://travelbeeee.tistory.com/126
*/
#include<iostream>
#include<queue>
using namespace std;
struct cmp {
    bool operator()(pair<int,char> p1, pair<int,char> p2){
        if (p1.first == p2.first)
            return p1.second < p2.second;
        else return p1.first > p2.first;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<pair<int,char>, vector<pair<int,char>>, cmp> PQ;
    int N;
    cin >> N;

    while (N--)
    {
        int x;
        cin >> x;
        if (x>0)
            PQ.push({x, '+'});
        else if (x<0)
            PQ.push({(-1) * x, '-'});
        else
        {
            if (PQ.empty())
                cout << 0 << "\n";
            else
            {
                if (PQ.top().second == '-')
                    cout << PQ.top().first * (-1);
                else cout << PQ.top().first;

                cout << "\n";
                PQ.pop();
            }
        }
    }
    return 0;
}