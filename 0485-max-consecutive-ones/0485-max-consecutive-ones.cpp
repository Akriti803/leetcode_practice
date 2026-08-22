class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0,r=0,maxlen=0,onec=0;
        while(r<nums.size()){
            if(nums[l]==1 && nums[r]==1){
                onec++;
            }
            if(nums[r]==0){
                    onec=0;
            }
            l++;
            r++;
            maxlen=max(maxlen,onec);
        }
              return maxlen;
    }
};