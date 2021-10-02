#include<iostream>
#include<vector>
using namespace std;

int N, M;
bool broken[10] = {false};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int temp;
        cin >> temp;
        broken[temp] = true;
    }

    

    return 0;
}