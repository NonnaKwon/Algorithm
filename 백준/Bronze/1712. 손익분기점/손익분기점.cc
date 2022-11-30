#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	int sell;
	cin>>a>>b>>c;
	
	if (b >= c) {
		cout<<"-1";
	}
	else {
		sell = a/(c-b);
		cout<<sell+1;
	}

	return 0;
}