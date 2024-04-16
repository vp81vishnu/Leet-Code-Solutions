class Solution {
public:
    string result;
    int maxii = 0;
    
    string longestPalindrome(string s) {
        int n = s.length();
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j >= i; j--) {
                if (j - i + 1 <= maxii) break; // Optimization
                if (s[i] == s[j] && is_palindrome(s, i, j)) {
                    int len = j - i + 1;
                    if (len > maxii) {
                        maxii = len;
                        result = s.substr(i, len);
                    }
                    break; // No need to continue checking shorter substrings
                }
            }
        }
        return result;
    }
    
    bool is_palindrome(string str, int start, int end) {
        while (start < end) {
            if (str[start] != str[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
