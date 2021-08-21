/*
    Brute-Force Algorithm
    1부터 숫자 증가시켜가며 666이 포함되어 있는지 조사
    => string.find() 사용
    find 함수의 return 값은 찾은 문자의 시작 index
                        찾는 문자가 없는 경우 string::npos 를 리턴한다. (npos는 쓰레기값)
    ex) s = "I love you"
        s.find("love") = 2
        s.find("lave") = 18446744073709551615  (쓰레기 값)
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    cin>>N;

    int cnt = 0;

    int num = 1;
    while (true)
    {
        if (to_string(num).find("666")!=string::npos) // 찾는 문자열 있는 경우
        {
            cnt++;
            if (cnt==N)
            {
                cout<<num;
                return 0;
            }
        }
        num++;
    }
    
    
    return 0;
}