class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int x=0;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            int left=x;
            x+=nums[i];
            int right=sum-x;
            vec[i]=abs(left-right);
        }
        return vec;
    }
};