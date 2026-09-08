class Solution {
public:
    int countCommas(int n) {
        long long ans = 0;
        if(n<1000){
            return 0;
        }
        else{
            ans = n-1000;

        }
        return ans+1;
        
    }
};