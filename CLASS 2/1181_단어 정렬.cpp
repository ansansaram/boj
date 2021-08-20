/*
    조건에 맞는 string 정렬을 위한 비교 함수 만드는게 이 문제의 point.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare2(string i, string j){ 
    return i < j; // 조건 2. 사전 순으로
}
bool compare1(string i, string j){ 
    if (i.length() == j.length()) // i와 j의 길이가 같다면 조건 2로 넘어간다.
    {
        return compare2(i, j);
    }
    else{
        return i.length()<j.length(); // 조건 1. 길이가 짧은 것부터
    }
}
int main(){
    int N;
    cin>>N;

    vector<string> sv;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin>>s;
        sv.push_back(s);
    }

    sort(sv.begin(),sv.end(),compare1);

    for (int i = 0; i < N; i++)
    {
        if (sv[i]==sv[i+1]) // 중복된 단어는 한 번씩만 출력한다.
        {
            continue;
        }
        else cout<<sv[i]<<"\n";
        
    }
    
    

    return 0;
}