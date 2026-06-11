class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int sum=0;
        priority_queue<int> pq;
        for(int& i:piles){
            sum+=i;
            pq.push(i);
        }
        while(k--){
            int top=pq.top();
            pq.pop();
            sum-=top/2;
            pq.push(top-(top/2));
        }
        return sum;
    }
};