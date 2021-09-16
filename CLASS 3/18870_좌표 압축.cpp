#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    vector<int> cv(v);  //  cv = v의 복사본
    
    sort(cv.begin(),cv.end());  // 오름차순 정렬하고
    cv.erase(unique(cv.begin(),cv.end()),cv.end());
    /*
        우선 unique 함수로 중복된 값을 맨 뒤로 쓰레기 값으로 보냄
        원래 cv가 1 1 2 2 2 4 5 5 6 6 이었으면 
        unique후에는 1 2 4 5 6 1 2 2 5 6 으로 바뀐다
        그리고 unique 함수의 리턴 값은 쓰레기값의 시작 주소이다. 
        따라서 erase함수를 통해 쓰레기값의 시작주소부터 마지막원소까지를 지워주면
        중복되지 않은 오름차순으로 정렬된 값들만 남는다.
    */
    for (int i = 0; i < N; i++)
    {
        vector<int>::iterator it;

        it = lower_bound(cv.begin(),cv.end(),v[i]); // 벡터 cv 내에서 값 v[i]가 가장 먼저 나오는 위치
        // 중복된 값들이 제거되었기 때문에 find함수 써도 되지만 시간초과난다.
        // lower_bound는 이진탐색으로 실행되어 O(logN)이다.

        cout << it - cv.begin() <<" " ; // 몇번째로 큰 지 반환하는것과 같다.
    }
    return 0;
}