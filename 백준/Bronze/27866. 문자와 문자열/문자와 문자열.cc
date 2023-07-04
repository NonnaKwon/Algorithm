#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char s[1001];
	int i;

	cin>>s>>i;
	int size = 0;
	while (s[size] != '\0') {
		size++;
	}

	if (size >= i) {
		cout << s[i - 1];
	}
	return 0;
}

