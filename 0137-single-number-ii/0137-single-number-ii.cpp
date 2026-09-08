class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0,twos=0;
        int n=nums.size();
        for(int i=0;i<=n-1;i++){
            ones=(ones^nums[i]) & ~twos;
            twos=(twos^nums[i]) & ~ones;
        }
        return ones;
    }
};