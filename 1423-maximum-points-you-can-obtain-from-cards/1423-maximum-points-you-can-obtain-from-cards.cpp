class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxsum=0,sum;
        for(int i=0;i<=k-1;i++){
            lsum=lsum+cardPoints[i];
            maxsum=lsum;
        }
        int rindex=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
           lsum=lsum-cardPoints[i];
           rsum=rsum+cardPoints[rindex];
           rindex--;
           sum=lsum+rsum;
           maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};