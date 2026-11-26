class Solution {
public:
    bool canAliceWin(int n){
     int remove=10,turn=0;
     while(n>=remove){
        n-=remove;
        turn =1-turn;
        remove--;
     }
    if(turn==0){
        return false;
    }
    return true;
    }
};