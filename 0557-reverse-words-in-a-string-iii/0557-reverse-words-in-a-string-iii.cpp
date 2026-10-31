class Solution {
public:
    string reverseWords(string s) {
        string word="",ans="";
        for(int i=0;i<s.size();i++){
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans+=" "+word;
            }
            word="";
        }
        return ans.substr(1);
    }
};