#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N;
	int B;

	long result = 0;
	cin >> N >> B;

	int tmp = 1;
	for (int i = N.size() -1 ; i >= 0; i--)
	{
		if ('A' <= N.at(i) && N.at(i) <= 'Z')
		{
			result += (N.at(i) - 'A' + 10) * tmp;
		}
		else
		{

			result += (N.at(i) - '0') * tmp;
		}
		tmp *= B;
	}

	cout << result;
}


