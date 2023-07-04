#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin>>T;
	
	while (T--) {
		char s[1001];
		int size=0;
		cin>>s;
		while (s[size] != '\0') {
			size++;
		}
		cout<<s[0]<<s[size-1]<<endl;
	}

	return 0;
}

