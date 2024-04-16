class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maximum=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='('){
                count++;
                if(count>maximum){
                    maximum=count;
                }
            }
            if(s[i]==')'){
                count--;
            }
        }
        return maximum;
    }
};