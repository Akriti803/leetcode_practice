class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(char c:s){
            if(!st.empty() && tolower(c)==tolower(st.top()) && c!=st.top()){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
            string result="";
            while(!st.empty()){
                result.push_back(st.top());
                st.pop();
            }
        reverse(result.begin(),result.end());
        return result;
    }
};