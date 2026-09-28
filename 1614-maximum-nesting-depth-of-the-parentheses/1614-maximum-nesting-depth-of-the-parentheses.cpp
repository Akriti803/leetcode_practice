class Solution {
public:
    int maxDepth(string s) {
        int depth=0,maxsum=0;
        int i=0;
        while(i<s.size()){
            if(s[i]=='('){
                depth++;
                maxsum=max(maxsum,depth);
            }
         else if(s[i]==')'){
            depth--;
        }
      i++;
    }
    return maxsum;
  }
};