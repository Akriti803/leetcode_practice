class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0,depth=0,n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                depth++;
            }
            else{//jab s[i] ')' ye hai tab hi humne check karna hai ki kya iske pehle '(' ye tha ki nhi agar haan to 2^depht kar denge
                depth--;
              if(s[i-1]=='('){
                  score+=1<<depth;//bit manupilation hai ye
            }
          }
        }
        return score;
    }
};