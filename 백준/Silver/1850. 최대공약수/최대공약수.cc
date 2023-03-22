#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned long long A,B;
	cin>>A>>B;

	unsigned long long num1, num2;
	if (A > B) {
		num1 = A;
		num2 = B;
	}
	else {
		num1 = B;
		num2 = A;
	}
	
	unsigned long long result=0;
	while (true) {
		unsigned long long rest = num1%num2; 
		if (rest == 0) {
			result = num2;
			break;
		}
		else {
			num1 = num2;
			num2 = rest;
		}
	}

	for (unsigned long long i = 0; i < result; i++) {
		cout<<"1";
	}
	return 0;
}
