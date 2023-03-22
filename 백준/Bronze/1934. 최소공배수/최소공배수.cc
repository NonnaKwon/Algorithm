#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin>>T;
	for (int i = 0; i < T; i++) {
		int A,B;
		cin>>A>>B;

		int num1,num2;
		if (A > B) {
			num1 = A;
			num2 = B;
		}
		else {
			num1 = B;
			num2 = A;
		}

		int result;
		int gcd;
		while (true) {
			result = num1%num2;
			if (result != 0) {
				num1 = num2;
				num2 = result;
			}
			else {
				gcd = num2;
				break;
			}
		}
		cout << A * B / gcd << '\n';
	}
	return 0;
}
