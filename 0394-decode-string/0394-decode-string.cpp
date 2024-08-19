#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> numbers;
        stack<string> str;
        string result = "";
        int i = 0;
        
        while (i < s.length()) {
            if (isdigit(s[i])) {
                int num = 0;
                while (isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                numbers.push(num);
            } 
            else if (s[i] == '[') {
                str.push(result);
                result = "";
                i++;
            } 
            else if (s[i] == ']') {
                string temp = str.top();
                str.pop();
                int repeat = numbers.top();
                numbers.pop();
                
                for (int j = 0; j < repeat; j++) {
                    temp += result;
                }
                
                result = temp;
                i++;
            } 
            else {
                result += s[i];
                i++;
            }
        }
        
        return result;
    }
};
