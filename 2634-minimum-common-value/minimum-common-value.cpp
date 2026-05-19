class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int ans=-1;
        unordered_map<int,int> mp1;
        for(auto& it:nums1){
            mp1[it]++;
        }
        for(int it:nums2){
            if(mp1.count(it)){
                ans=it;
                break;
            }
        }
        return ans;
    }
};