class Solution {
public:
int getdays(string date){
    int month=stoi(date.substr(0,2));
    int day=stoi(date.substr(3,2));
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int total=day;
    for(int i=0;i<month-1;i++){
        total+=days[i];
    }
    return total;
}
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
       int aStart=getdays(arriveAlice);
       int aEnd=getdays(leaveAlice);
       int bStart=getdays(arriveBob);
       int bEnd=getdays(leaveBob);
       int start=max(aStart,bStart);
       int end=min(aEnd,bEnd);
       if(start>end){
        return 0;
       }
       return end-start+1;
    }
};