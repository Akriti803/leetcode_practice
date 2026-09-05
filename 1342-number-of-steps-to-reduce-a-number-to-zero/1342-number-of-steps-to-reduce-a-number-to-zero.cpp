class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;

        while(num != 0) {

             if(num % 2 == 0) {
                num=num/2;
                 steps++;
    }
              else {
                  num=num-1;//-1 kar denge jab odd number ko to fir wo even ban jaayega aur fir wo even waale condition me jaayega
                   steps++;
          }
       }

        return steps;
    }
};