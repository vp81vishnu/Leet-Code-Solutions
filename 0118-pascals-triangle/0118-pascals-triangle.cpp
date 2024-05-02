class Solution {
public:
    vector<vector<int>> generate(int Rows) {
       vector<vector<int>>res;
       for(int i=0;i<Rows;i++){
        vector<int>v(i+1,1);
        for(int j=1;j<i;j++){
            v[j]=res[i-1][j]+res[i-1][j-1];
        }
        res.push_back(v);
       } 
       return res;
    }
};