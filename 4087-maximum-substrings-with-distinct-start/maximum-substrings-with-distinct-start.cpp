class Solution {
public:
    int maxDistinct(string s) {
        vector<int> vec(26,0);
        int count=0;
        for(char ch:s){
            vec[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            if(vec[i]!=0)
              count++;
        }
        return count;
    }
};