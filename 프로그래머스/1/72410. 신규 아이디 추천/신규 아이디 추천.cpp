#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string new_id) {
    string answer = "";
    // 시작 1~ 3단계
    for(int i=0;i<new_id.size();i++)
    {
        char c = new_id[i];
        if(('A' <= c && c <= 'Z'))
        {
            new_id[i] = c - 'A' + 'a'; // 소문자로 바꾸기.
            continue;
        }
            
        if(('a' <= c && c <= 'z') || ('0' <= c && c <= '9') 
           || (c == '-' || c == '_' || c == '.'))
            continue;
        
        new_id.erase(i,1);
        i--;
    }
    
    int dot_count = 0;
    for(int i=0;i<new_id.size();i++)
    {
        if(new_id[i] == '.')
        {
            if(dot_count > 0)
                new_id.erase(i--,1);
            else
                dot_count++;
        }
        else
            dot_count = 0;
    }
    
    //4~5단계
    if(new_id.size() != 0 && new_id[0] == '.')
        new_id.erase(0,1);
    if(new_id.size() != 0 && new_id[new_id.size()-1] == '.')
        new_id.erase(new_id.size()-1,1);
    
    if(new_id.size() == 0)
    {
        new_id = "a";
    }
    
    //6~7단계
    new_id = new_id.substr(0,15);
    if(new_id.size() == 15 && new_id[14] == '.')
        new_id.erase(14,1);
    else if(new_id.size() <= 2)
    {
        int count = 3 - new_id.size();
        char last = new_id[new_id.size()-1];
        while(count-->0)
            new_id += last;
    }
    return new_id;
}