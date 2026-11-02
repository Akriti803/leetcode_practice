class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(isdigit(operations[i][0])|| operations[i][0]=='-'){
                st.push(stoi(operations[i]));
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                st.push(2*st.top());
            }
            else if(operations[i]=="+"){
                int a =st.top();
                st.pop();
                int b=st.top();
                st.push(a);//ye orginal waala bhi preserve karke rakhna hai
                st.push(a+b);
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
     return sum;
    }
};