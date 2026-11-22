class Solution {
public:
    bool checkString(string s) {
     int n=s.size();
     int index=s.find('b');
     if(index==-1){
        return true;
     }
     for(int i=index+1;i<n;i++){
        if(s[i]=='a'){
            return false;
        }
     }
     return true;
    }
};