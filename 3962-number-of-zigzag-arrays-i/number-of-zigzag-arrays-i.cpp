class Solution {
public:
    typedef long long LL;
    const LL mod=1e9+7;
    int zigZagArrays(int n, int l, int r) {
        int m=r-l+1;
        vector<int> dp(m,1);
        bool flag=true;
        for(int j=2;j<=n;j++){
            int ans=0;
            if(flag){
                for(int i=m-1;i>=0;i--){
                    int val=dp[i];
                    dp[i]=ans;
                    ans=(ans+val)%mod;
                }
            }
            else{
                for(int i=0;i<m;i++){
                    int val=dp[i];
                    dp[i]=ans;
                    ans=(ans+val)%mod;
                }
            }
            flag=!flag;
        }
        return ((accumulate(dp.begin(),dp.end(),0LL)%mod)<<1)%mod;
    }
};