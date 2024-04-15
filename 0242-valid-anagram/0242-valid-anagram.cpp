class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr_s[200]={0};
        int arr_t[200]={0};
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            arr_s[s[i]]++;
            arr_t[t[i]]++;
            
        }
        for(int i=0;i<200;i++){
            if(arr_s[i]!=arr_t[i]){
                return false;
            }
        }
       return true;
    }
};