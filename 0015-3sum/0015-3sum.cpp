class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sum;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;// duplicate i bhi to skip karna hai
            int j=i+1,k=nums.size()-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;//humko duplicate j bhi to skip karna hai
                    while(j<k && nums[k]==nums[k+1]) k--;//humko duplicate k bhi to skip karna hai
                }
               else if(sum<0){
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return ans;
    }
};