#include <iostream>
#include <string>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true)
	{
		int num;
		cin >> num;
		if (num == -1)
		{
			break;
		}

		int sum = 1;
		string str = to_string(num) + " = 1";
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				sum += i;
				str += " + " + to_string(i);
			}
		}

		if (sum == num)
		{
			cout << str << "\n";
		}
		else
		{
			cout << to_string(num) << " is NOT perfect." << "\n";
		}
	}
	return 0;
}