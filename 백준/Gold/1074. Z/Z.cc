#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int search(int N,int r,int c)
{
	int k; // 어떤면에 있는지(0~3)
	int minusR = 0, minusC = 0;

	int powResult = pow(2, N - 1);
	//0,1
	if (powResult > r)
	{
		if (powResult > c)
			k = 0;
		else
		{
			k = 1;
			minusC = powResult;
		}
	}
	else //2,3
	{
		if (powResult > c)
			k = 2;
		else
		{
			k = 3;
			minusC = powResult;
		}
		minusR = powResult;
	}

	int tmp = pow(powResult, 2) * k;

	if (N == 1)
		return k;

	return tmp + search(N - 1, r - minusR, c - minusC);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int N, r, c;
	cin >> N >> r >> c;

	//2^n * k
	//2^n-1 * k
	//2^n-2 * k
	//다 더하면 답 나올듯
	cout << search(N, r, c) << endl;

	return 0;
}