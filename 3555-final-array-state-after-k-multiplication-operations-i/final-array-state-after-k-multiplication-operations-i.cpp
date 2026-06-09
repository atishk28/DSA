class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        vector<int> ans(nums.size());
        while(k--){
            auto [x,i]=pq.top();
            pq.pop();
            pq.push({x*multiplier,i});
        }
        while(!pq.empty()){
            auto [num,i]=pq.top();
            pq.pop();
            ans[i]=num;
        }
        return ans;
    }
};