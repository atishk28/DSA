class Solution {
public:
    int f(int n){
        int res=0;
        while(n>0){
            int digit=n%10;
            res+=digit*digit;
            n=n/10;
        }
        return res;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        while(st.find(n)==st.end()){
            st.insert(n);
            n=f(n);
            if(n==1) return true;
        }
        return false;
    }
};