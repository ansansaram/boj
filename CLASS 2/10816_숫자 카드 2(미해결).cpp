#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> arr;

int howManyCardsOf(int target){

}

int main(){
    int N,M;

    cin>>N;
    
    while (N--)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    
    sort(arr.begin(),arr.end());


    cin>>M;
    while (M--)
    {
        int target;
        cin>>target;

        cout<<howManyCardsOf(target)<<" ";
    }
    

    return 0;
}