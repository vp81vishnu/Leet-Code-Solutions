class Solution {
public:
    bool is_anagram(const string& a, const string& b) {
        if (a.size() != b.size()) return false;

        vector<int> count(26, 0);

        for (char c : a) {
            count[c - 'a']++;
        }

        for (char c : b) {
            count[c - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }

        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<bool> visited(strs.size(), false);

        for (int i = 0; i < strs.size(); i++) {
            if (visited[i]) continue;
            vector<string> temp;
            temp.push_back(strs[i]);
            visited[i] = true;

            for (int j = i + 1; j < strs.size(); j++) {
                if (!visited[j] && is_anagram(strs[i], strs[j])) {
                    temp.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            res.push_back(temp);
        }

        return res;
    }
};
