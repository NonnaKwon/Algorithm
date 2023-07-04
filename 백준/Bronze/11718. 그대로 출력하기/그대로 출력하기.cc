#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T=100;
	
	while (T--) {
		char s[101];
		cin.getline(s,101,'\n');
		cout<<s<<endl;
	}

	return 0;
}

