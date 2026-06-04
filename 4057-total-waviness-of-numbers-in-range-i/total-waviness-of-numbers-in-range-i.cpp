class Solution {
public:
        int f(int num){
        string s=to_string(num);
        int n=s.length();
        if (n<3) return 0;
        int score=0;
        for(int i=1;i<=n-2;i++) {
            if(s[i]>s[i-1] && s[i]>s[i+1]) score++;
            if(s[i]<s[i-1] && s[i]<s[i+1]) score++;
        }
        return score;
    }
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for (int num=num1;num<=num2;num++){
            ans+=f(num);
        }
        return ans;
    }
};