class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        list<int>st;
        for(int a:asteroids){
            while(!st.empty() && st.back()>0 && a<0){
                if(abs(st.back())<abs(a)){
                    st.pop_back();
                }
                else if(abs(st.back())>abs(a)){
                    a=0;
                    break;
                }
                else{
                    st.pop_back();
                    a=0;
                    break;
                }
            }
            if(a!=0){
                st.push_back(a);
            }
        }
        vector<int> result(st.begin(),st.end());
        return result;
    }
};