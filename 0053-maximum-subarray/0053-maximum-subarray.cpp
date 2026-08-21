class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=0,max_sum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            current_sum+=nums[i];
            max_sum=max(current_sum,max_sum);
            if(nums.size()==1){
                return nums[i];
            }
            if(current_sum<0 && nums.size()>1){
                current_sum=0;
            }
        }
        return max_sum;
    }
};