#include <vector>
#include <string>

using namespace std;

class Solution {
    bool check(const string &str1, const string &str2) {
        if (str1.size() != str2.size()) return false;

        vector<int> count(26, 0);

        for (char c : str1) {
            count[c - 'a']++;
        }
        for (char c : str2) {
            count[c - 'a']--;
        }
        for (int i : count) {
            if (i != 0) return false;
        }
        return true;
    }

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<bool> visited(strs.size(), false);

        for (int i = 0; i < strs.size(); ++i) {
            if (visited[i]) continue;

            vector<string> ans;
            ans.push_back(strs[i]); // Use strs[i] directly
            visited[i] = true;

            for (int j = i + 1; j < strs.size(); ++j) {
                if (visited[j]) continue;

                if (check(strs[j], strs[i])) { // Compare strs[j] with strs[i]
                    visited[j] = true;
                    ans.push_back(strs[j]);
                }
            }
            res.push_back(ans);
        }
        return res;
    }
};
