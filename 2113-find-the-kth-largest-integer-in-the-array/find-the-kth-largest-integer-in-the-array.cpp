class Solution {
public:
    struct comp {
        bool operator()(string& a,string& b){
            if(a.size()==b.size()) return a > b;
            return a.size()>b.size();
        }
    };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,comp> pq;
        for(auto& s:nums) {
            pq.push(s);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};