
#include <iostream>

using namespace std;

int main() {
  int a,b =0;
  double sum=0;
  cin >> a >> b;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(9);

  if (a > 0 && b<10) {
      sum = (double)a/b;
      cout<<sum<<endl;
  }

}