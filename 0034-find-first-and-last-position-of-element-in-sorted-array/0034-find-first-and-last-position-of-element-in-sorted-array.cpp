class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                v.push_back(i);
            }
        }
        int n=v.size();
        if(n==1){
            result.push_back(v[0]);
            result.push_back(v[0]);
        }
        if(n>=2){
            result.push_back(v[0]);
            result.push_back(v[n-1]);
        }
        if(n==0){
            result.push_back(-1);
            result.push_back(-1);
        }
        return result;

    }
};