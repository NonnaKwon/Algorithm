#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//선택정렬
	char* input = new char[15];
	cin>>input;
	vector<int> arr;
	for (int i = 0; input[i] != '\0'; i++) {
		arr.push_back(input[i]-'0');
	}

	for (int i = 0; i < arr.size(); i++) {
		int max = arr[i];
		int max_index = i;
		for (int j = i+1; j < arr.size(); j++) {
			if (max < arr[j]) {
				max = arr[j];
				max_index = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[max_index];
		arr[max_index] = tmp;
	}
	
	for (int i = 0; i < arr.size(); i++) {
		cout<<arr[i];
	}

	delete[] input;
	return 0;
}
