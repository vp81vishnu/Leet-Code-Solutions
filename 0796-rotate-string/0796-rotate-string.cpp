class Solution {
public:
    bool rotateString(string s, string goal) {
        string res=s+s;
        if(s.length()!=goal.length()){
            return false;
        }
        if(res.find(goal)!=-1){
            return true;
        }
        return false;
    }
};