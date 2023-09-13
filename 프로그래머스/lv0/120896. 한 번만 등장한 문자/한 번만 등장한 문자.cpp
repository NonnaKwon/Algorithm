#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> alphabet((int)('z'-'a')+1,0);
    for(int i=0;i<s.length();i++)
    {
        alphabet[s.at(i)-'a']++;
    }
    
    for(int i=0;i<alphabet.size();i++)
    {
        if(alphabet[i]==1)
        {
            answer += (char)(i+'a');
        }
    }
    return answer;
}