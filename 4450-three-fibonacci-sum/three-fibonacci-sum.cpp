class Solution {
public:
    bool threeFibonacciSum(int n) {
       long long x= 0;
       long long y=1;
       long long sum = 0;
       bool ans = false;
       while(sum <= n){
        sum = x+y;
        if(sum+x+y == n){
            ans =true;;
        }
        x = y;
        y=sum;
           }
       return ans;
    }
};