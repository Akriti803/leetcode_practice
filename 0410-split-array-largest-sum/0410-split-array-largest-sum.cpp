class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int maxSum) {
        int parts = 1, currSum = 0;
        for (int num : nums) {
            if (currSum + num <= maxSum) {
                currSum += num;
            } else {
                parts++;
                currSum = num;
            }
            if (parts > k) return false;
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = 0, high = 0;
        for (int num : nums) {
            low = max(low, num);  
            high += num;           
        }
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canSplit(nums, k, mid)) {
                high = mid - 1;    
            } else {
                low = mid + 1;     
            }
        }
        return low;
    }
};
