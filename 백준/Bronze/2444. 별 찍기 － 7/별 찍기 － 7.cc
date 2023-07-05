#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin>>num;

	int count = 2*num-1;
	for (int i = 0; i < num-1; i++) {
		for (int j = 0; j <= count / 2 + i; j++) {
			if (count / 2 - i <= j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout<<endl;
	}

	for (int i = num-1; i >= 0; i--) {
		for (int j = 0; j <= count/2+i; j++) {
			if (count / 2 - i <= j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		if (i != 0) {
			cout << endl;
		}
	}


	return 0;
}	

