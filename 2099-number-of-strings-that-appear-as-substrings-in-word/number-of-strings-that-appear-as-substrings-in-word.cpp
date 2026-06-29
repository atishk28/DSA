class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n=word.size();
        int ans=0;
        for(auto it:patterns){
            int l=it.size();
            for(int i=0;i<=n-l;i++){
                bool flag=true;
                for(int j=0;j<l;j++){
                    if(it[j]!=word[i+j]){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};