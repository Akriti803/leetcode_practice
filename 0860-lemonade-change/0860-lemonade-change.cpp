class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fivec=0,tenc=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                fivec++;
            }
            else if(bills[i]==10){
                if(fivec>=1){
                    fivec--;
                    tenc++;
                }
                else{
                    return false;
                }
            }
            else{
                if(fivec>=1 && tenc>=1){
                    fivec--;
                    tenc--;
                }
                else if(fivec>=3){
                    fivec=fivec-3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};