class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string res="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0];
        string last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return res;
            }
            else{
                res+=first[i];
            }
        }
        return res;
    }
};