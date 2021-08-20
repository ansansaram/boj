#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2){
    if (p1.second  == p2.second)
    {
        return p1.first < p2.first;
    }
    else return p1.second < p2.second;
    
}

int main() {

	vector<pair<int, int> > v;

	int N;
	int a, b;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}

	sort(v.begin(), v.end(),cmp);

	for (int i = 0; i < N; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}


	return 0;
}