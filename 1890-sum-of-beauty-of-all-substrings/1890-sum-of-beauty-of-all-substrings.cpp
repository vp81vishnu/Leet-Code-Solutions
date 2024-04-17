class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for(int i=0;i<s.size();i++)
        {
            int a[26] = {0};
            for(int j=i;j<s.size();j++)
            {
                int maxi = 0;
                int mini = INT_MAX;

                a[s[j]-'a']++;

                for(int k=0;k<26;k++){
                    maxi = max(maxi,a[k]);
                    if(a[k] != 0)
                        mini = min(mini,a[k]);
                }
                sum += (maxi-mini);
            }
        }
        return sum;
    }
};