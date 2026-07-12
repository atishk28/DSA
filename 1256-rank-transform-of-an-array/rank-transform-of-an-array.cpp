class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n);
        vector<int> sorted=arr;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int> mp;
        int rank=1;
        for(int i=0;i<sorted.size();i++){
            auto it=mp.find(sorted[i]);
            if(it==mp.end()){
                mp[sorted[i]]=rank++;
            }
            else continue;
        }
        for(int i=0;i<n;i++){
            ans[i]=mp[arr[i]];
        }
        return ans;
    }
};