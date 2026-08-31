class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        // Count frequency
        for(char ch : s) {
            freq[ch]++;
        }

        // Find first character whose frequency is 1
        for(int i = 0; i < s.length(); i++) {
            if(freq[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};