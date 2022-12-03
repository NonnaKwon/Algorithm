#include <iostream>
using namespace std;

bool isPrime(int);

int main() {
	int count=0;
	int n;
	cin>>n;
	for (int i = 0; i < n; i++) {
		int num;
		cin>>num;
		if (isPrime(num)) {
			count++;
		}
	}

	cout<<count;

	return 0;
}

bool isPrime(int num) {
	if (num == 1) {
		return false;
	}

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}