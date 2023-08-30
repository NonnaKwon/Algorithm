#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	
	if (a + b + c != 180)
	{
		cout << "Error";
	}
	else if (a == b)
	{
		if (b == c)
		{
			cout << "Equilateral";
		}
		else
		{
			cout << "Isosceles";
		}
	}
	else if (a == c || b == c)
	{
		cout << "Isosceles";
	}
	else
	{
		cout << "Scalene";
	}

	return 0;
}