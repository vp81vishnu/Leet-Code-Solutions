class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> str;
        int len = s.length();
        for (int i = 0; i < len; ++i) {
            if (s[i] != ')') {
                str.push(s[i]);
            } else {
                string temp = "";
                while (!str.empty() && str.top() != '(') {
                    temp += str.top();
                    str.pop();
                }
                if (!str.empty() && str.top() == '(') {
                    str.pop(); 
                    for (char c : temp) {
                        str.push(c);
                    }
                }
            }
        }
        
        string result = "";
        while (!str.empty()) {
            result = str.top() + result;
            str.pop();
        }
        
        return result;
    }
};
