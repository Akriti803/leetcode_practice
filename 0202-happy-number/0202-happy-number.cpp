class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4){//4 agar mil gaya to it is not a happy cycle
            int sum=0;
            while(n>0){
            int ld=n%10;
            sum=sum+(ld*ld);
            n=n/10;
         }
            n=sum;
        }
        return n==1;
    }
};