#include <iostream>
using namespace std;

int main() {
	long day= 1;
	long a,b,v;
	cin>>a>>b>>v;
	
	if (v - a < a - b && v!=a) {
		day++;
	}
	else if((v-a)%(a-b)==0) {
		day += (v - a) / (a - b);
	}
	else {
		day += (v - a) / (a - b) + 1;
	}
	cout<<day;
	return 0;
}