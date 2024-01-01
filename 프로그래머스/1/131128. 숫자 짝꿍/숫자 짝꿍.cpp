#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    sort(X.begin(),X.end());
    sort(Y.begin(),Y.end());
    for(int i=X.length()-1,j=Y.length()-1;0<=i&&0<=j;)
    {
        if(X[i] == Y[j])
        {
            answer += X[i];
            i--; j--;
        }else if(X[i] > Y[j])
            i--;
        else
            j--;
    }
    if(answer == "")
        answer = "-1";
    else if(answer[0] == '0')
        answer = "0";
    return answer;
}