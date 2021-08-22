#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;

    int K;
    cin>>K;

    while (K--)
    {
        int temp;
        cin>>temp;
        if (temp == 0) st.pop();
        else st.push(temp);
    }
    
    int sum = 0;

    while (!st.empty())
    {
        sum+=st.top();
        st.pop();
    }
    
    cout<<sum;
    
    return 0;
}