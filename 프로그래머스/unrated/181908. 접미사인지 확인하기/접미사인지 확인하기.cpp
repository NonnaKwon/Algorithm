#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    for(int i=my_string.size(),j=is_suffix.size();j>=0;i--,j--)
    {
        if(my_string[i] != is_suffix[j])
            return 0;
    }
    return 1;
}