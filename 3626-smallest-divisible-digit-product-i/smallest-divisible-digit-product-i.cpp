class Solution {
public:
    int digitprod(int n){
        int prod=1;
        while(n>0){
            int unit=n%10;
            prod=prod*unit;
            n=n/10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;;i++){
            if(digitprod(i)%t==0){
                return i;
            }
        }
        return 0;
    }
};