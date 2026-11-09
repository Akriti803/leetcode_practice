class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string result1="";
        string result2="";
        for(char c:s){
            if(c!='#'){
                result1.push_back(c);
            }
            else if(!result1.empty()){
                result1.pop_back();
            }
        }
         for(char c:t){
            if(c!='#'){
                result2.push_back(c);
            }
            else if(!result2.empty()){
                result2.pop_back();
            }
        }
        if(result1==result2){
            return true;
        }
        return false;
    }
};