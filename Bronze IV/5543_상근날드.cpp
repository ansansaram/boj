#include<iostream>
using namespace std;
int main(){
    int minBurger, minDrink;
    minBurger = 2000;
    minDrink = 2000;

    int burger, drink;
    for (int i = 0; i < 3; i++)
    {
        cin >> burger;
        minBurger = min(minBurger, burger);
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> drink;
        minDrink = min(minDrink, drink);
    }
    cout << minBurger + minDrink - 50;
    
    return 0;
}