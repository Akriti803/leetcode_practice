class Solution {
public:
    int first(vector<int> &nums,int target){
        int low=0,high=nums.size()-1,mid;
        int ans=nums.size();
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]>=target){
                   ans=mid;
                   high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

    int last(vector<int> &nums,int target){
        int low=0,high=nums.size()-1,mid;
       int ans=nums.size();
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]<=target){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=first(nums,target);
        int l=last(nums,target);
        if(f==nums.size()||nums[f]!=target){
            return{-1,-1};
        }
        return {f,l};
    }
};