
class Solution {
public:
    string makeGood(string s) {
        string result;
        stack<char> stak;
        for(int i = 0; i < s.length(); i++) {
            if (!stak.empty() && ((isupper(s[i]) && islower(stak.top()) && tolower(s[i]) == tolower(stak.top())) ||
                (islower(s[i]) && isupper(stak.top()) && tolower(s[i]) == tolower(stak.top())))) {
                stak.pop();
            } else {
                stak.push(s[i]);
            }
        }
        while (!stak.empty()) {
            result += stak.top();
            stak.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};