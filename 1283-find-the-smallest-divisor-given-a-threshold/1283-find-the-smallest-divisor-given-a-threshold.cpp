class Solution {
public:
   bool divisor(vector<int> &nums,int d,int threshold){
    long long total=0;
    for(int i=0;i<nums.size();i++){
        total+=(nums[i]+d-1)/d;
        if(total>threshold){
            return false;
        }
    }
    return true;
  }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end()),mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(divisor(nums,mid,threshold)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};