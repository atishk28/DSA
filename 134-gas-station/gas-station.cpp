class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int totalin=accumulate(gas.begin(),gas.end(),0);
        int totalout=accumulate(cost.begin(),cost.end(),0);
        if(totalin<totalout) return -1;
        int res=0;
        int currtotal=0;
        for(int i=res;i<n;i++){
            currtotal+=gas[i]-cost[i];
            if(currtotal<0){
                res=i+1;
                currtotal=0;
            }
        }
        return res;
    }
};