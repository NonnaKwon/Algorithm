#include <iostream>
using namespace std;


int main() {
	int arr[9][9];
	int max = 0;
	int row = 0;
	int col = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin>>arr[i][j];
			if (max < arr[i][j]) {
				max = arr[i][j];
				row = i;
				col = j;
			}
		}
	}

	cout<<max<<endl<<row+1<<" "<<col+1;
	
	
	return 0;
}

