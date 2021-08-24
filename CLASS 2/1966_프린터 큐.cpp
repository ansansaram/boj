#include<iostream>
#include<queue>
using namespace std;

int main(){
    int T;
    cin>>T;

    while (T--)
    {
        int N,M;
        cin>>N>>M;
        queue<pair<int,int> > Q; // 초기입력 순서와 우선순위 저장
        priority_queue<int> PQ; // 우선순위(중요도) 저장. 
                                // 우선순위큐는 알아서 우선순위가 큰 순서로 정렬된다.

        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            int prio;
            cin>>prio;
            Q.push(make_pair(i,prio));
            PQ.push(prio);
        }

        while (true) // 한 번 돌때마다 큐의 맨 앞 원소가 문제 조건에 맞는지 비교한다.
        {
            int idx = Q.front().first; 
            int prio = Q.front().second;
            Q.pop();
            if (PQ.top() == prio) // 우선순위가 맞는 경우
            {
                PQ.pop();
                ans++; 
                if (idx == M) // index까지 찾는 index와 같은 경우.
                {
                    cout << ans << "\n";
                    break;
                }
            }
            else Q.push(make_pair(idx,prio)); // 우선순위가 맞지 않다면 큐의 가장 뒤에 재배치.
        }
    }
    
    return 0;
}
