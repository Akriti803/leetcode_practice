class Solution {
public:
    string removeKdigits(string num, int k) {
        string result;
        for(char c:num){
            while(!result.empty() && result.back()>c && k>0){
                result.pop_back();//bada waala digit remove karte hai
                k--;//remove karen ke baad count bhi minus karte haik ka
            }
            result.push_back(c);
        }//agar string khatam ho gaya ho lekin fir bhi agar k bach jaaye to
        while(k>0){
            result.pop_back();
            k--;
        }
        int i=0;//staring ke 0s ko hatane ke liye
        while(i<result.size() && result[i]=='0'){
            i++;
        }
        result=result.substr(i);//ye starting ke zero ko hata ke baaki sab leta hai result me
        return result.empty()?"0":result;//agar empty ho to 0 return kar dena
    }
};