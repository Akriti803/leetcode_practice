class Solution {
public:
    void subset(vector<int> &nums,vector<vector<int>> &ans,int i,vector<int>&current ){
        if(i==nums.size()){
            ans.push_back(current);
            return;
        }
        current.push_back(nums[i]);
        subset(nums,ans,i+1,current);
        current.pop_back();
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        subset(nums,ans,idx,current);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>>ans;
         vector<int>current;
         subset(nums,ans,0,current);
         return ans;
    }
};