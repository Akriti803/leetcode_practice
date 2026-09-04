class Solution {
public:
    void helper(vector<int>& candidates, int target, int idx,
                vector<int>& combination, vector<vector<int>>& ans) {
        if(target == 0) {
            ans.push_back(combination);
            return;
        }
        if(idx == candidates.size() || target < 0) {
            return;
        }
        // include
        combination.push_back(candidates[idx]);
        helper(candidates, target - candidates[idx], idx,
               combination, ans);
        combination.pop_back();//backtracking
        // exclude
        helper(candidates, target, idx + 1,
               combination, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combination;
        helper(candidates, target, 0, combination, ans);
        return ans;
    }
};