class Solution {
public:
    bool isPal(string s)
    {
        string origin=s;
        reverse(s.begin(),s.end());
        return origin==s;
    }
    void lower(string &s)
    {
        for(int i=0;i<s.size();i++)
        s[i]=tolower(s[i]);
    }
    bool isPalindrome(string s) {
        string pal;
        lower(s);
        for(char i:s)
        {
            if(isdigit(i) || isalpha(i))
            pal+=i;
        }
        if(isPal(pal)) return true;
        else return false;
    }
};