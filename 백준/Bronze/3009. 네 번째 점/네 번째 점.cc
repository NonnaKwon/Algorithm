#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	pair<int, int> A, B, C;
	cin >> A.first >> A.second;
	cin >> B.first >> B.second;
	cin >> C.first >> C.second;
	
	int x = 0;
	int y = 0;

	if (A.first == B.first)
	{
		x = C.first;
	}
	else if(A.first == C.first)
	{
		x = B.first;
	}
	else
	{
		x = A.first;
	}

	if (A.second == B.second)
	{
		y = C.second;
	}
	else if (A.second == C.second)
	{
		y = B.second;
	}
	else
	{
		y = A.second;
	}

	cout << x << " " << y;

	return 0;
}