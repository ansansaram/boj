// 삼항연산자의 결과 값 타입은 같아야 한다.
// exp1 ? exp2 : exp3 에서 exp2 와 exp3은 타입이 같아야 한다.

#include<iostream>
using namespace std;

int main(){
    int A,B;
    cin>>A>>B;

    string ans;

    ans=(A==B?"==":(A>B?">":"<"));

    cout<<ans;

    return 0;
}   