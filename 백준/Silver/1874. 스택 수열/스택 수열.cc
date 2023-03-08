#include <iostream>
using namespace std;



int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int tmp_size =0 ,result_size =0;
    int n;
    cin >> n;

    int* tmpArr = new int[n];
    char* resultArr = new char[n*2];

    int count = 1;
    int input;
    for (int i = 0; i < n; i++) {
        cin>>input;
        while (true) {
            if (tmp_size != 0 && tmpArr[tmp_size-1] == input) {
                resultArr[result_size] = '-';
                tmpArr[tmp_size]=0;
                result_size++; tmp_size--;
                break;
            }
            else if (count > n) {
                cout << "NO" << endl;
                return 0;
            }

            resultArr[result_size] = '+';
            tmpArr[tmp_size] = count;
            result_size++; tmp_size++;
            count++;
        }
    }

    for (int i = 0; i < result_size; i++) {
        cout<< resultArr[i]<<'\n';
    }

    return 0;

}