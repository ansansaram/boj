#include<iostream>
using namespace std;
int main() {
	int A, B, C;

	cin >> A >> B >> C;

	int bep; // BREAK-EVEN POINT(손익분기점)
	if (B>=C)
	{
		cout << "-1";
		return 0;
	}
	bep = A / (C - B) + 1;
	cout << bep;

	return 0;
}