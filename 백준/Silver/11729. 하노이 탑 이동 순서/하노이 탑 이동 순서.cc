#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

void hanoi(int n, int start, int end, int pass) {
    if (n == 1) {
        printf("%d %d\n", start,end);
    }
    else {
        hanoi(n-1,start,pass,end);
        printf("%d %d\n", start, end);
        hanoi(n-1,pass,end,start);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int cnt = pow(2,n)-1;
    printf("%d\n",cnt);
    hanoi(n,1,3,2);

    return 0;
}

