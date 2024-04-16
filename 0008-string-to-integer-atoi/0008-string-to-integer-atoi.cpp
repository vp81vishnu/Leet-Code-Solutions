#include <string>
#include <climits>

class Solution {
public:
    int myAtoi(std::string s) {
        int sign = 1;
        long long sum = 0;
        int i = 0;

     
        while (i < s.length() && s[i] == ' ')
            i++;

        
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

       
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            sum = sum * 10 + (s[i] - '0');
            if (sum * sign > INT_MAX) return INT_MAX;
            if (sum * sign < INT_MIN) return INT_MIN;
            i++;
        }

        return sum * sign;
    }
};
