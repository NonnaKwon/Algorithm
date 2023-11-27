#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    for(int i=0;i<n-1;i++)
        num_list.erase(num_list.begin());
    return num_list;
}