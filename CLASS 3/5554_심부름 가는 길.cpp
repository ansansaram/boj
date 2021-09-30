#include<iostream>

using namespace std;

int arr[4];

int main(){
    int time = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        time += arr[i];
    }

    cout << time / 60 << "\n" << time % 60;


    

    return 0;
}