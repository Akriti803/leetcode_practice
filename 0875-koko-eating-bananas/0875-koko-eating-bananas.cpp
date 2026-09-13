class Solution {
public:
  bool canEatAll(vector<int>& piles, int speed, int h) {
    long long hours = 0;
    int n = piles.size();
    for (int i = 0; i < n; i++) {
        hours += (piles[i]+speed-1) / speed;
        if (hours > h) return false;       
    }
    return true;  
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());  
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canEatAll(piles, mid, h)) {
                ans = mid;     
                high = mid - 1;
            } else {
                low = mid + 1; 
            }
        }
        return ans;
    }
};
