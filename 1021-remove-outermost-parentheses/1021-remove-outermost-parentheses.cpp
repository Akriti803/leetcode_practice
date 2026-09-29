class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        string result="";
        for(char c:s){
            if(c=='('){
            if(!st.empty()){//jo pehla opening bracket hai na usko hum log skip kar denge aur wo aise hi skip hoga ki matlba agar stack empty nhi hai to hi result me daalao to pehle waala jo bracket hai us waqt to stcak empty hi tha to humne usse result me nhi daala
                result+=c;
            }
            st.push(c);//jab result me wo outermost bracket nhi daala to ab is statemnt se hum log usse bas stack me push kar denge na ki result me
        }
            else{
                st.pop();
                if(!st.empty()){
                    result+=c;                
                }
            }
        }
        return result;
    }
};