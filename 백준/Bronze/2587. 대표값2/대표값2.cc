#include <iostream>
using namespace std;


int main() {
	int arr[5];
	int sum=0;
	for (int i = 0; i < 5; i++) {
		cin>>arr[i];
		sum+=arr[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
		
	}
	cout<<sum/5<<endl;
	cout<<arr[2]<<endl;
	
	return 0;
}

