class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int> ans(n);
        for (int curr=0;curr<n;curr++){
            if(boxes[curr]=='1'){
                for(int i=0;i<n;i++){
                    ans[i]+=abs(i-curr);
                }
            }
        }
        return ans;
    }
};