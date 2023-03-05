#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  //n 과 m 을 입력받는다.
  int n, m;
  cin >> n >> m;

  // n을 입력 받으면서 구간합 배열을 만든다(arr)
  int *arr = new int[n];

  cin >> arr[0];
  for (int i = 1; i < n; i++) {
    int num;
    cin >> num;
    arr[i] = arr[i - 1] + num;
  }

  //for문을 이용하여 m번만큼 i와 j를 입력받는다
  for (int i = 0; i < m; i++) {
    int s, e;
    cin >> s >> e;
    
    if (s != 1) {
      cout << arr[e-1] - arr[s - 2] << '\n';
    }
    else {
      cout << arr[e - 1]<< '\n';
    }
  }
  //arr[j]-arr[i-1] 를 출력한다


  delete[] arr;
  
  return 0;
}