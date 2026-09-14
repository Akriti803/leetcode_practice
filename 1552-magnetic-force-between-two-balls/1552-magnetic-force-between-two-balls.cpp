class Solution {
public:
    bool canweplace(vector<int> &position,int distance,int m){
        int cows=1,last=position[0];
        for(int i=0;i<position.size();i++){
            if(position[i]-last>=distance){
                cows++;
                last=position[i];
            }
            if(cows>=m){
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int low=1,high=position[n-1]-position[0],mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(canweplace(position,mid,m)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;

    }
};