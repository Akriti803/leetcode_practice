class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size(),value,sum=0;
        for(int i=0;i<n;i++){
            value=columnTitle[i]-'A'+1;
            sum=sum*26+value;
        }
        return sum;
    }
};