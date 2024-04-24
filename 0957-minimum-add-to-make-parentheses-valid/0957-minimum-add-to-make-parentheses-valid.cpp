class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>sta;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                sta.push(s[i]);
            }
            if(s[i]==')'){
                if(!sta.empty()){
                    sta.pop();
                }
                else{
                    count++;
                }
            }
        }
        while(!sta.empty()){
            count++;
            sta.pop();
        }
        return count;
    }
};