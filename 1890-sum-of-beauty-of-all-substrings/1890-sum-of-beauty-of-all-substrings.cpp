
class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int result = 0;

        for (int i = 0; i < n; i++) {
            int hash[256] = {0}; // Reset hash for each new substring
            for (int j = i; j < n; j++) {
                hash[s[j]]++; // Update frequency count for the character
                int maximum = INT_MIN;
                int minimum = INT_MAX;
                for (int k = 0; k < 256; k++) {
                    if (hash[k] != 0) {
                        maximum = max(maximum, hash[k]);
                        minimum = min(minimum, hash[k]);
                    }
                }
                result += maximum - minimum;
            }
        }

        return result;
    }
};