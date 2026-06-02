class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=1;i<n;i++){
            int j=i-1;
            if(nums[i]==nums[j]){
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};