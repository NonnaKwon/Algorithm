#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  //값을 string으로 입력받는다
    char *input=new char[51];
    cin>>input;
//+가 나오면 계속 더하다가 -가 나오면 다음 -가 나올때 까지 빼기.
//다음 -나와도 계속 뺄 수 있네... 계속 빼기
    int sum =0;
    int num = 0;
    bool isMinus = false;

    for (int i = 0; ; i++) {
        char token = input[i];
        if (token >= '0' && token <= '9') {
            num*=10;
            num+=token-'0';
        }
        else if (token == '+' || token == '-'|| token == '\0') {
            if (isMinus == false) {
                sum+=num;
            }
            else {
                sum-=num;
            }
            
            if (token == '-') {
                isMinus = true;
            }
            else if (token == '\0') {
                break;
            }
            num=0;
        }
    }

    cout<<sum;

    return 0;
}
