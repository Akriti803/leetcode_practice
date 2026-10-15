class Solution{
    public:
     void subarray(vector<int>& nums,int start,int end,int& ans){
         if(start==nums.size()){
            return;
         }
         else if(end>nums.size()){
            subarray(nums,start+1,start+1,ans);
            return;
         }
         map<int,int>mp;
         for(int i=start;i<end;i++){
            mp[nums[i]]++;
         }
         int count=mp.size();
         ans +=count*count;
         subarray(nums,start,end+1,ans);
     }
     int sumCounts(vector<int> &nums){
        int ans=0;
        subarray(nums,0,1,ans);
        return ans;
     }
};