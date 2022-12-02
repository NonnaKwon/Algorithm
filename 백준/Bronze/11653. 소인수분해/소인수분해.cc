#include <iostream>
using namespace std;

bool isPrime(int);

int main() {

	int num;
	cin>>num;

	while (num > 1) {
		for (int i = 2; i <= num; i++) {
			if (num % i == 0 && isPrime(i)) {
				cout<<i<<endl;
				num /= i;
				break;
			}
		}
	}

	return 0;
}

bool isPrime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}