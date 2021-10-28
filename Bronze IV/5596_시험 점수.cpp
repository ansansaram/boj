#include<iostream>

using namespace std;
int main(){
    int sum1 = 0, sum2 = 0;
    int score;
    for (int i = 0; i < 4; i++)
    {
        cin >> score;
        sum1 += score;
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> score;
        sum2 += score;
    }
    cout << max(sum1,sum2);

    return 0;
}