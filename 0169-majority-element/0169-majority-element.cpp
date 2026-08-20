class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>hashh;
        for(auto it:nums){
            hashh[it]++;
        }
        for(auto it:hashh){
            if(it.second>nums.size()/2){
                return it.first;
            }
        }
        return 0;
    }
};