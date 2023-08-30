#include <iostream>
#include <cmath>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int min = x;

	if (x > y)
	{
		min = y;
	}

	if (min > h - y && w - x > h - y)
	{
		min = h - y;
	}
	else if(min > w - x)
	{
		min = w - x;
	}

	cout << min;
	return 0;
}