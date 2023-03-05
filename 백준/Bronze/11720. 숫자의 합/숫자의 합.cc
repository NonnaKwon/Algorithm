#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  char *str = new char[n+1];
  cin >> str;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += (int)(str[i] - '0');
  }

  cout << sum;
  
  return 0;
}