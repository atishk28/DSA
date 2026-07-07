class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string str=to_string(n);
        long long sum=0;
        string str1="";
        for(char& ch:str){
            if((ch-'0')!=0){
                str1.push_back(ch);
                sum+=ch-'0';
            }
        }
        long long x=stoi(str1);
        return x*sum;
    }
};