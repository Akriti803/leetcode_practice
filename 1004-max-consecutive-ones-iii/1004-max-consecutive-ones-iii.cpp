class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,maxlen=0,zeroc=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zeroc++;
            }
        while(zeroc>k){
            if(nums[l]==0) {zeroc--;
            }
            l++;
        }
         int len=r-l+1;
         maxlen=max(maxlen,len);
         r++;
      }
        return maxlen;
    }
};