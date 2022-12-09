#include <iostream>
using namespace std;

int T(int num) {
	int n=1;
	while (true) {
		if (n * (n + 1) / 2 >= num) {
			return n;
		}
		else {
			n++;
		}
	}
}

int main() {
	int num;
	cin>>num;

	int son =1;
	int mom = 1;

	int n= T(num);
	int sum = (n+1)*n/2;
	sum -= num;

	if (n % 2 == 0) {//n이 짝수-> 분모먼저
		son = n - sum;
		mom += sum;
	}
	else {//n이 홀수 -> 분자먼저
		son += sum;
		mom = n - sum;
	}

	cout<<son<<"/"<<mom;
	return 0;
}

