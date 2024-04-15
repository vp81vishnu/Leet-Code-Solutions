class Solution {
public:
    bool rotateString(string s, string goal) {
        string res=s+s;
        if(s.length()!=goal.length()){
            return false;
        }
        int a;
        a=res.find(goal);
        if(a<s.length() && a>=0){
            return true;
        }
        return false;
    }
};