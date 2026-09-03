class Solution {
public:
    void solve(vector<int>& nums, int i, vector<int>& current,
               vector<vector<int>>& ans) {
        // Base case
        if(i == nums.size()) {
            ans.push_back(current);
            return;
        }
        // Include
        current.push_back(nums[i]);
        solve(nums, i + 1, current, ans);
        // Backtrack
        current.pop_back();
        // Exclude
        solve(nums, i + 1, current, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        solve(nums, 0, current, ans);
        return ans;
    }
};