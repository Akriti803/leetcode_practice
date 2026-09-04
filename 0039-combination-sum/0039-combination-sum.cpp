class Solution {
public:

    void combinationSum(vector<int>& arr, int idx, int target,
                        vector<int>& temp, vector<vector<int>>& ans) {

        if(target == 0) {
            ans.push_back(temp);
            return;
        }

        if(idx == arr.size() || target < 0) {
            return;
        }

        // Include
        if(arr[idx] <= target) {
            temp.push_back(arr[idx]);

            // Same element dobara le sakte hain
            combinationSum(arr, idx, target - arr[idx], temp, ans);

            temp.pop_back();
        }
        // Exclude
        combinationSum(arr, idx + 1, target, temp, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        combinationSum(candidates, 0, target, temp, ans);
        return ans;
    }
};