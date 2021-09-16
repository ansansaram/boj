/*
    원래 우선순위 큐는 내림차순 정렬이 디폴트이다.
    <Typename, container<Typename>, greater<Typename>> 으로 오름차순 정렬 시킬 수 있다.
*/
#include<iostream>
#include<queue>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    
    priority_queue<int, vector<int>, greater<int> > PQ; // 오름차순 정렬 우선순위 큐
    
    while (N--)
    {
        int ipt;
        cin >> ipt;
        if(!ipt){
            if (PQ.empty())
            {
                cout<<0<<"\n";
            }
            else
            {
                cout<<PQ.top()<<"\n";
                PQ.pop();
            }
        }
        else
        {
            
            PQ.push(ipt);
        }
        
    }
    

    return 0;
}
