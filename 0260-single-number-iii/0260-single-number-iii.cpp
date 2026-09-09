class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>result;
        for(auto it:m){
            if(it.second==1){
                    result.push_back(it.first);
            }
        }
        return result;
    }
};