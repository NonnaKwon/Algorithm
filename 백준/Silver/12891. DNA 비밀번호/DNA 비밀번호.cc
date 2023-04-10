#include <iostream>
#include <vector>
using namespace std;

int dnaToint(char c);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int S,P;
	cin>>S>>P;
	char* str = new char[S+1];
	cin>>str;

	int pass[4];
	int now[4];

	for (int i = 0; i < 4; i++) {
		cin>>pass[i];
		now[i] = 0;
	}

	for (int i = 0; i < P; i++) {
		now[dnaToint(str[i])]++;
	}

	int count=0;
	for (int i = 0, j = P; j <= S; i++, j++) {
		bool isSuccess = true;
		for (int t = 0; t < 4; t++) {
			if (pass[t] > now[t]) {
				isSuccess = false;
				break;
			}
		}
		if(isSuccess) count++;
		now[dnaToint(str[i])]--;
		now[dnaToint(str[j])]++;
	}

	cout<<count<<"\n";

	delete[] str;
	return 0;
}

int dnaToint(char c) {
	if (c == 'A') return 0;
	else if (c == 'C') return 1;
	else if (c == 'G') return 2;
	else if (c == 'T') return 3;
}