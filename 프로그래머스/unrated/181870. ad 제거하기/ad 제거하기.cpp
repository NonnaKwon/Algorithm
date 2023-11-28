#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    for(int i=0;i<strArr.size();i++)
    {
        if(strArr[i].find("ad")!=string::npos)
        {
            strArr.erase(strArr.begin()+i);
            i--;
        }
    }
    return strArr;
}