#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;

	string str = "";
	
	int num = N/4;
	for (int i = 0; i < num; i++) {
		str+="long ";
	}
	str+="int";
	cout<<str<<endl;
	return 0;
}
