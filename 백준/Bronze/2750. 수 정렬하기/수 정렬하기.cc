#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;

	int* arr = new int[t];
	for (int i = 0; i < t; i++) {
		cin>>arr[i];
	}

	for (int i = 0; i < t; i++) {
		for (int j = i+1; j < t; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
		cout<<arr[i]<<endl;
	}
	
	return 0;
}

