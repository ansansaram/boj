#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N,M;

    cin>>N>>M;

    vector<int> arr;

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());
    
    int maxV=0;

    for (int i = 0; i < arr.size()-2; i++)
    {
        for (int j = i+1; j < arr.size()-1; j++)
        {
            for (int k = j+1; k < arr.size(); k++)
            {
                if (arr[i]+arr[j]+arr[k]<=M)
                {
                    maxV = max(maxV,arr[i]+arr[j]+arr[k]);
                }
            }
        }
    }

    cout<<maxV;

    return 0;
}