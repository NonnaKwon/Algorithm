#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N;
	int B;
	cin >> N >> B;


	string result = "";
	while (N != 0)
	{
		if (N % B >= 10)
		{
			result += (char)(N % B - 10 + 'A');
		}
		else
		{
			result += N % B +'0';
		}
		N /= B;
	}

	reverse(result.begin(),result.end());
	cout << result;

	return 0;
}