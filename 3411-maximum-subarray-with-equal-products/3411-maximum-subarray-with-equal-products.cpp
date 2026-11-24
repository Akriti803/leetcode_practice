class Solution {
public:
    int maxLength(vector<int>& nums) {
      int n=nums.size(),i,j,k;
      int answer=2;
      for(i=0;i<n-1;i++){
        if(gcd(nums[i],nums[i+1])!=1){
            continue;
        }
        for(j=i+2;j<n;j++){
            bool valid =true;
            for(k=i;k<j;k++){
                if(gcd(nums[k],nums[j])!=1){
                    valid=false;
                    break;
                }
            }
            if(!valid){
                break;
            }
            answer=max(answer,j-i+1);
        }
      
      }
      return answer;
    }
};