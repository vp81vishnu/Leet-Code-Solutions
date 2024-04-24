#include <string>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        while (n > 1) {
            string next = "";
            int count = 1;
            for (int i = 0; i < result.size(); i++) {
                if (i + 1 < result.size() && result[i] == result[i + 1]) {
                    count++;
                } else {
                    next += to_string(count) + result[i];
                    count = 1;
                }
            }
            result = next;
            n--;
        }
        return result;
    }
};