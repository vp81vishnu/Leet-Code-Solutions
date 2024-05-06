class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0;
        int sum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=max(sum,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]+ans<0){
                ans=0;
            }
            else{
                ans=ans+nums[i];
                sum=max(sum,ans);
            }
        }
        return sum;
    }
};