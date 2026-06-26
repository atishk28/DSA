class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int sum=0;
        mp[0]=1;
        long long valid=0;
        long long res=0;
        for (int x:nums){
            if(x==target){
                valid+=mp[sum];
                sum++;
            }
            else{
                sum--;
                valid-=mp[sum];
            }
            mp[sum]++;
            res+=valid;
        }
        return res;
    }
};