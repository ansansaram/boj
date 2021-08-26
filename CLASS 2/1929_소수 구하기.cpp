#include<iostream>
using namespace std;
int main() {
	int M, N;
	cin >> M >> N;

	int *X = new int[N + 1];
	fill_n(X, N+1, 0);

	for (int i = 2; i < N+1; i++)
	{
		X[i] = i;
	}
	for (int i = 2; i < N+1; i++)
	{
		if (X[i]==0)
		{
			continue;
		}
		else
		{
			for (int j = 2*i; j < N+1; j+=i)
			{
				X[j] = 0;
			}
		}
	}
	for (int i = M; i <=N; i++)
	{
		if (X[i]!=0)
		{
			cout << X[i] << "\n";
		}
	}


	return 0;
}
