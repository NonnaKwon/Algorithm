#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(int num);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;
	vector<bool> arr(10000001,true);

	arr[0] = false;
	arr[1] = false;
	for (int i = 2; i*i < 10000001; i++) {
		if (arr[i]==true) {
			for (int j = 2; j*i < 10000001; j++) {
				arr[j*i] = false;
			}
		}
	}

	bool suc = true;
	int tmpNum=0;
	for (int i = N; i < 10000001 ; i++) {
		if (arr[i] == true) {
			tmpNum = i;
			if (isPalindrome(tmpNum)) {
				cout<<tmpNum<<"\n";
				break;
			}
		}
	}

	return 0;
}

bool isPalindrome(int num) {
	string tmp_str = to_string(num);
	char const* tmp = tmp_str.c_str();
	int s=0;
	int e=tmp_str.size()-1;

	while (s < e) {
		if (tmp[s] != tmp[e]) {
			return false;
		}
		s++;
		e--;
	}

	return true;
}