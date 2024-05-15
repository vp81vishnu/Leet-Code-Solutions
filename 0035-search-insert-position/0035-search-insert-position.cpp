class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int flag=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                flag=0;
                return i;
            }
        }
        if(flag){
            if(target>nums[nums.size()-1]){
                return nums.size();
            }
            if(target<nums[0]){
                return 0;
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]<target && nums[i+1]>target){
                    return i+1;
                }
            }
        }
        return -1;

    }
};