class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        int cnt=0;
        long long tmp=coins;
        for(int i=0;i<n;i++){
            if(costs[i]<=tmp) cnt++;
            tmp-=costs[i];
        }
        return cnt;
    }
};