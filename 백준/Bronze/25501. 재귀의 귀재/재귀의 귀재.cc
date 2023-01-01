#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int recursion(const char* s, int l, int r,int& count) {
    count++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1,count);
}

int isPalindrome(const char* s,int& count) {
    return recursion(s, 0, strlen(s) - 1,count);
}

int main() {
    int n;
    scanf("%d",&n);
    
    while (n-- > 0) {
        int count=0;
        char* str=new char[1001];
        scanf("%s",str);
        int result = isPalindrome(str, count);
        printf("%d %d\n",result,count);
    }

    return 0;
}

