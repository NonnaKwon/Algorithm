#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char str[101];
	cin >> str;

	int size = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		size++;
	}

	for (int i = 0, j = size - 1; i < j; i++, j--) {
		if (str[i] != str[j]) {
			cout << "0";
			return 0;
		}
	}
	cout << "1";
	return 0;
}	

