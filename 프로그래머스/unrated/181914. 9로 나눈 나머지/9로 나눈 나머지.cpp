#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    long long sum = 0;
    for(char c : number)
        sum += c-'0';
    return sum%9;
}