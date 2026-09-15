class Solution {
public:
    int findMin(vector<int>& nums) {
      int low=0,high=nums.size()-1,mid;
      int ans=INT_MAX;
      if(nums.size()==1) return nums[0];
      while(low<=high){
        mid=low+(high-low)/2;
         if(nums[low]==nums[mid] && nums[high]==nums[mid]){
            ans=min(ans,nums[mid]);
            low++;
            high--;
         }
         else if(nums[low]<=nums[mid]){
            ans=min(ans,nums[low]);
            low=mid+1;
        }
        else{
            ans=min(ans,nums[mid]);
            high=mid-1;
        }
      }
      return ans;
    }
};