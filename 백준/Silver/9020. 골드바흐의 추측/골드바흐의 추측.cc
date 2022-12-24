#include <iostream>
using namespace std;

bool isPrime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	bool* prime= new bool[10001];
	for (int i = 0; i < 10001; i++) {
		prime[i] = true;
	}

	//아리스토텔레스의 채 -> 배열에 저장
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i * i < 10001; i++) {
		if (isPrime(i)) {
			for (int j = i*2; j < 10001; j += i) {
				prime[j]=false;
			}
		}
	}

	int t;
	cin>>t;
	while(t--) {
		int input;
		cin >> input;

		int num1 = 0,num2 = 0;
		int distance = 10000;
		
		for (int i = 2; i <= input/2; i++) {
			if (prime[i] && prime[input - i]) {
				if (distance > (input-i) - (i)) {
					num1 = i;
					num2 = input - i;
					distance = num2 - num1;
				}
			}
		}
		cout<<num1<<" "<<num2<<endl;
	}
	
	
	return 0;
}

