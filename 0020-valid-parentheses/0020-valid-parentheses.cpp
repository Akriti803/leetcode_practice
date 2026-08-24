class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                if (st.size() == 0) {
                    return false;
                }
                
                char top = st.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop(); 
                } else {
                    return false; 
                }
            }
        }
        return st.size() == 0;
    }
};