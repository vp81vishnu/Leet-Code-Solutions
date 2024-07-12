 class Solution {
public:
    int maximumGain(std::string s, int x, int y) {
        int ans = 0;
        if (x > y) {
            
            for (int i = 1; i < s.size(); ++i) {
                if (s[i] == 'b' && s[i - 1] == 'a') {
                    s.erase(i - 1, 2);
                    ans += x;
                    i -= 2; 
                    if (i < 0) i = 0; 
                }
            }
            
            for (int i = 1; i < s.size(); ++i) {
                if (s[i] == 'a' && s[i - 1] == 'b') {
                    s.erase(i - 1, 2);
                    ans += y;
                    i -= 2; 
                    if (i < 0) i = 0; 
                }
            }
        } else {
            
            for (int i = 1; i < s.size(); ++i) {
                if (s[i] == 'a' && s[i - 1] == 'b') {
                    s.erase(i - 1, 2);
                    ans += y;
                    i -= 2; 
                    if (i < 0) i = 0; 
                }
            }
            
            for (int i = 1; i < s.size(); ++i) {
                if (s[i] == 'b' && s[i - 1] == 'a') {
                    s.erase(i - 1, 2);
                    ans += x;
                    i -= 2; 
                    if (i < 0) i = 0; 
                }
            }
        }
        return ans;
    }
};