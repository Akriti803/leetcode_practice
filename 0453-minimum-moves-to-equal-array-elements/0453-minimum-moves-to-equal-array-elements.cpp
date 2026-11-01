class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size(),sum=0;
        int minimum=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        if(nums[i]<minimum){
            minimum=nums[i];
          }
        }
        return sum-(n*minimum);
    }
};