#include<iostream>
using namespace std;
int main(){
    int arr1[4], arr2[2];
    int min1 = 100, min2 = 100;
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr1[i];
        sum += arr1[i];
        if (min1 > arr1[i])
        {
            min1 = arr1[i];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> arr2[i];
        if (min2 > arr2[i])
        {
            min2 = arr2[i];
        }
        sum += arr2[i];
    }
    cout << sum - min1 - min2;
    return 0;
}