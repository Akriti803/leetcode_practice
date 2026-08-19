class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto it:nums){
             count[it]++;
        }
             for(auto it:count){
                 if(it.second>=2){
                return true;
            }
        }
        return false;
     }
};