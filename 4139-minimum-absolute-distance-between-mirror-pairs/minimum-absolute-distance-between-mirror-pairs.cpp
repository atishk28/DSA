class Solution {
public:
    int rev(int num){
        long long rnum=0;
        while(num>0){
            rnum=rnum*10 + num%10;
            num/=10;
        }
        return rnum;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int res=INT_MAX;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i])){
                res=min(res,(i-mp[nums[i]]));

            }
            mp[rev(nums[i])]=i;
        }
        return res==INT_MAX?-1:res;
    }
};