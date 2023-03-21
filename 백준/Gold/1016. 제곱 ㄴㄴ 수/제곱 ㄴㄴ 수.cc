#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long max,min;
	cin>>min>>max;
	vector<bool> arr(max-min+1,false);

	for (long i = 2; i * i <= max; i++) {
		long pow = i*i;
		long start = min/pow;

		if (min % pow != 0) {
			start++;
		}

		for (long j = start; pow * j <= max; j++) {
			arr[(int)((j*pow)-min)]=true;
		}
	}

	int count=0;
	for (int i = 0; i <= max-min; i++) {
		if (arr[i] == false) {
			count++;
		}
	}

	cout<<count<<endl;
	return 0;
}
