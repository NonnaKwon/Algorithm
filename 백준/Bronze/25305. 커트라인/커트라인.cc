#include <iostream>
using namespace std;


int main() {
	int n,k;
	cin>>n>>k;

	int* arr=new int[n];

	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}

	//정렬
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	cout<<arr[n-k]<<endl;
	
	return 0;
}

