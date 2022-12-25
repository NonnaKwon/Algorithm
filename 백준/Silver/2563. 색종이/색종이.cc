#include <iostream>
using namespace std;


int main() {
	int t;
	int count=0;
	cin >> t;

	bool white[101][101];
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			white[i][j]=false;
		}
	}
	while (t--) {
		int x,y;
		cin>>x>>y;
		for (int i = x; i < x + 10 && i<101; i++) {
			for (int j = y; j < y + 10 && j<101; j++) {
				white[i][j]=true;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (white[i][j]) {
				count++;
			}
		}
	}

	cout<< count;
	
	return 0;
}


