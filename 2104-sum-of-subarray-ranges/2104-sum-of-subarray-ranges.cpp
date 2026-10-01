class Solution {
public:
  vector<int> findPSE(vector<int> &arr){
    int n=arr.size();
    vector<int> pse(n);
    stack<int>st;
    for(int i=0;i<n;i++){
    while(!st.empty() && arr[st.top()]>arr[i]){
        st.pop();
    }
    pse[i]=st.empty()?-1:st.top();
    st.push(i);
    }
    return pse;
  }
  vector<int> findNSE(vector<int> &arr){
    int n=arr.size();
    vector<int> nse(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
    while(!st.empty() && arr[st.top()]>=arr[i]){
        st.pop();
    }
    nse[i]=st.empty()?n:st.top();
    st.push(i);
    }
    return nse;
  }
    long long sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> pse=findPSE(arr);
        vector<int>nse=findNSE(arr);
        long long minimum=0;
        for(int i=0;i<n;i++){
            long long left=i-pse[i];
            long long right=nse[i]-i;
            minimum += (long long)arr[i] * left * right;
        }
        return minimum;
    }

  vector<int> findPGE(vector<int> &arr){
    int n=arr.size();
    vector<int> pge(n);
    stack<int>st;
    for(int i=0;i<n;i++){
    while(!st.empty() && arr[st.top()]<arr[i]){
        st.pop();
    }
    pge[i]=st.empty()?-1:st.top();
    st.push(i);
    }
    return pge;
  }
  vector<int> findNGE(vector<int> &arr){
    int n=arr.size();
    vector<int> nge(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
    while(!st.empty() && arr[st.top()]<=arr[i]){
        st.pop();
    }
    nge[i]=st.empty()?n:st.top();
    st.push(i);
    }
    return nge;
  }
    long long sumSubarraymaxs(vector<int>& arr) {
        int n=arr.size();
        vector<int> pge=findPGE(arr);
        vector<int>nge=findNGE(arr);
        long long maximum=0;
        for(int i=0;i<n;i++){
            long long left=i-pge[i];
            long long right=nge[i]-i;
            maximum += (long long)arr[i] * left * right;
        }
        return maximum;
    }
    long long subArrayRanges(vector<int>& nums) {
        long long maxsum=sumSubarraymaxs(nums);
        long long minsum=sumSubarrayMins(nums);
        return (maxsum - minsum);
    }
};


             