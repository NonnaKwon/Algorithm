#include <iostream>
using namespace std;

bool isPrime(int);

int main() {

	bool prime[246913];

	prime[0] = false;
	prime[1] = false;

	for (int i = 2; i < 246913; i++) {
		prime[i] = true;
	}

	for (int i = 2; i*i < 246913; i++) {
		if (prime[i] == false) {
			continue;
		}
		if (isPrime(i)) {
			for (int j = i * 2; j < 246913; j += i) {
				prime[j] = false;
			}
		}
	}

	while (true) {
		int num;
		cin >> num;
		if (num == 0) {
			break;
		}

		int count = 0;
		for (int i = num + 1; i <= num * 2; i++) {
			if (prime[i]) {
				count++;
			}
		}
		cout << count << endl;
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