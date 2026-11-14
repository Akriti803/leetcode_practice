class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum=INT_MAX;
        for(int i=0;i+l<=nums.size();i++){
            int sum=0;
        for(int j=i;j<i+l-1;j++){
            sum+=nums[j];
        }
        for(int j=i+l-1;j<=i+r-1 && j<nums.size();j++){
            sum+=nums[j];

            if(sum>0){
               minsum=min(minsum,sum);
            }
        }
    }
       return minsum==INT_MAX?-1:minsum;
   }    
};