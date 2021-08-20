#include<iostream>
using namespace std;

int main(){
    int x,y,w,h;
    cin>>x>>y>>w>>h;

    int min_x_length=1000;
    int min_y_length=1000;
    int ans = 1000;
    min_x_length = min(x,w-x);
    min_y_length = min(y,h-y);
    ans = min(min_x_length,min_y_length);

    cout<<ans;

    return 0;
}