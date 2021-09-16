/*
    O(M)에 푸는 방법
    I가 나올때 다음, 다다음 문자가 O, I 이면 k를 1 증가시켜준다.
    k = 1 => IOI
    k = 2 => IOIOI .. 
    
    인덱스는 i -> i+2로 바꾸어서 탐색한다.


    k = N 이라면 찾는 문자열이 있다는 의미이다.
    이때 총 cnt를 1 증가 시켜주고
    k를 1 감소 시켜준다.(이전의 문자열 중복 제거 위해서)
*/

#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;

    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < M; i++)
    {
        
        if (s[i]=='O')
        {
            continue;
        }
        else
        {
            int k = 0;
            while (s[i+1]=='O'&&s[i+2]=='I')
            {
                k++; // k가 1 이면 IOI까지 찾았다는 의미
                if (k == N) // 원하는 문자열 찾았으면
                {
                    cnt++; // 카운트 +1 해주고
                    k--; // 뒤에 또 OI나올 수 있으므로 중복 제거 위해 k 1감소시킨다.
                    // IOIOI라는 문자열에서 IOI를 찾을 때
                    // 앞의 IOI발견했을때 카운트 +1해주고 앞의 IO부분은 다시 세면 안되므로 -1 해주는 것
                }
                i+=2;
            }
        }
    }
    
    cout << cnt;

    return 0;
}