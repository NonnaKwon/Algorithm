#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> list;
	string str = "";
	for (int i = 0; i < 5; i++) {
		string input;
		cin >> input;
		list.push_back(input);
	}

	for (int i = 0; i<15 ;i++) {
		for (int j = 0; j < 5; j++) {
			if (list[j].length() <= i) {
				continue;
			}
			str += list[j].at(i);
		}
	}

	cout << str;
	
	return 0;
}


