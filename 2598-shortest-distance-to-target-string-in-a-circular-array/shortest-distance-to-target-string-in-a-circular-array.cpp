class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int res=INT_MAX;
        for(int i=0;i<n;i++){
            if(words[i]==target){
                int d1=abs(i-startIndex);
                int d2=n-d1;
                res=min({res,d1,d2});
            }
        }
        return res==INT_MAX ? -1:res;
    }
};