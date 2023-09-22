#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(string token : quiz)
    {
        bool isMinus = false;
        int result = 0;
        string tmp = "";
        
        for(char c : token)
        {
            if(!isspace(c))
                tmp += c;
            else
            {
                if(tmp == "-")
                    isMinus = true;
                else if(tmp != "=" && tmp!= "+")
                    result += isMinus?stoi(tmp)*-1:stoi(tmp);
                tmp = "";
            }
        }
        if(result == stoi(tmp))
            answer.push_back("O");
        else
            answer.push_back("X");
    }
    return answer;
}