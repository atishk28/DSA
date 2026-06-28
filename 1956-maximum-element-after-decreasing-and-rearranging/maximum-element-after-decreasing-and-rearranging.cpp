class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size();
        vector<int> vec(n+1,0);
        for(int num:arr){
            vec[min(num,n)]++;
        }
        int res=1;
        for(int i=2;i<=n;i++){
            res=min(res+vec[i],i);
        }
        return res;
    }
};