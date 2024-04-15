#include <stack>
#include <string>

class Solution {
public:
    string reverseWords(string s) {
        stack<char> sta;
        string result;
        
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] != ' ') {
                sta.push(s[i]);
            } else if(!sta.empty()) {
                while(!sta.empty()) {
                    result += sta.top();
                    sta.pop();
                }
                result += ' ';
            }
        }
        
      
        while(!sta.empty()) {
            result += sta.top();
            sta.pop();
        }
        

        int start = 0, end = result.size() - 1;
        while(start < result.size() && result[start] == ' ') {
            start++;
        }
        while(end >= 0 && result[end] == ' ') {
            end--;
        }
        
        return result.substr(start, end - start + 1);
    }
};
