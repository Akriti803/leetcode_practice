class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()){
            if(nums[i]==i){
                i++;
            }
            else{
                return i;
            }
        }
        return i;
    }
};
//isko we can do by XOR waala method aswell