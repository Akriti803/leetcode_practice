class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int>ans;
        while(i<=m-1 && j<=n-1){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
               ans.push_back(nums2[j]);
               j++;
            }
        }
        while(i<=m-1){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<=n-1){
            ans.push_back(nums2[j]);
            j++;
        }
        for(int x=0;x<m+n;x++){
            nums1[x]=ans[x];
        }
    }
};