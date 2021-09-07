/*
    모자 2종류, 신발 3종류 : (2 + 1) * (3 + 1) - 1 가지 조합
    -1 빼는 이유 : 아무것도 안 입은 경우
    
    map 순회방법
    1. iterator 이용
    map<string, int>::iterator i;
    for(i = m.begin(); i != m.end(); i++){
        cout << i->second;
    }
    2. auto 이용
    for(auto i : m){
        cout << i.second;
    }
*/
#include<iostream>
#include<map>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    
    while (T--)
    {
        int n;
        cin >> n;
        map<string, int> clothing;
        string name, category;
        while (n--)
        {
            cin >> name >> category;
            if (clothing.find(category) == clothing.end())
            {
                clothing.insert(make_pair(category, 1));
            }
            else clothing[category]++;
        }
        
        map<string,int>::iterator i;
        int res = 1;
        for ( i = clothing.begin(); i != clothing.end(); i++)
        {
            res *= (i->second + 1);
        }
        res -= 1; // 아무것도 안 입은 경우

        cout << res << "\n";
    }
    
    

    return 0;
}