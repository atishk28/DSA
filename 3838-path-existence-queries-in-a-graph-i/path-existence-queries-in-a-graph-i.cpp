class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int>vec(n,0);
        int curr=0;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]>maxDiff){
                curr++;
            }
            vec[i]=curr;
        }
        vector<bool> ans;
        for(vector<int>& it:queries){
            ans.push_back(vec[it[0]]==vec[it[1]]);
        }
        return ans;
    }
};