#include<iostream>

using namespace std;

int main(){
    int M;
    cin >> M;
    bool cup[4] = {false};
    cup[1] = true;

    while (M--)
    {
        int X,Y;
        cin >> X >> Y;
        bool temp;
        temp = cup[X];
        cup[X] = cup[Y];
        cup[Y] = temp;
    }
    for (int i = 1; i <= 3; i++)
    {
        if (cup[i])
        {
            cout << i;
        }
    }
    
    

    return 0;
}