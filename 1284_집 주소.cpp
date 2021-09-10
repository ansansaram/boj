#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int temp;

    int width;
    while (cin>>temp)
    {
        if (!temp)
        {
            break;
        }
        
        width = 0;
        int cnt = 0;
        while (temp)
        {
            cnt++;
            int n = temp%10;
            if(n == 1){
                width += 2;
            }
            else if (n == 0)
            {
                width += 4;
            }
            else
            {
                width += 3;
            }
            temp /= 10;
        }
        width += cnt;
        width ++;

        cout << width << "\n";
    }
    

    return 0;
}