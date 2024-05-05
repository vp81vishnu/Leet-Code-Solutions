class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> subV(26, 0);
        vector<int> srcV(26, 0);
        for (auto c : s1)
            subV[c - 'a']++;

        int right = 0;
        int left = 0;
        while (right < s2.length()) {
            srcV[s2[right] - 'a']++;
            if (right - left + 1 == s1.length()) {
                if (subV == srcV)
                    return true;
                srcV[s2[left] - 'a']--;
                left++;
            }
            right++;
        }
        return false;
    }
};