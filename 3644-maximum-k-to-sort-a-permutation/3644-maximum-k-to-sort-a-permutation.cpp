class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n=nums.size();
        int k=-1;//isme sab bit set hote hai
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                k=(k & nums[i]);
            }
        }   
        if(k==-1){
            return 0;
        }
        return k;
    }
};