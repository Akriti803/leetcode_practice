class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
      int M=1e9+7,sum=0;
      int oddc=0,evenc=1,count=0;
      for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum%2!=0){
          count+=evenc;
          oddc++;
        }
        else{
          count+=oddc;
          evenc++;
        }
        count %= M;
      }
      return count;
    }
};