class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr_s[200]={0};
        int arr_t[200]={0};
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(arr_s[s[i]]++ !=arr_t[t[i]]++){
                return false;
            }
            arr_s[s[i]]=i+1;
            arr_t[t[i]]=i+1;
        }
        return true;
    }
};