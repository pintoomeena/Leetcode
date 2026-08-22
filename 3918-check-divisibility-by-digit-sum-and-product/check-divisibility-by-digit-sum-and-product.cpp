class Solution {
public:
    bool checkDivisibility(int n) {
        int N=n;
        int prod = 1;
        int sum = 0;
        while(n>0){
            int digit = n%10;
            sum += digit;
            prod *= digit;
            n/=10;
        }
        if(N%(sum+prod)==0){
            return true;
        }
        return false;
    }
};