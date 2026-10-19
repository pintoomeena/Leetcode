class Solution {
public:
    bool check(int n){
        if (n < 2) return false;
        for(int i=2; i*i <=n; i++){
            if(n%i == 0)return false;
            
        }
        return true;
    }
    vector<int> maxPrimes(int n, int s) {
        vector<int> nums;
        long long sum = 0;
        for(int i=2; i<=n; i++){
            if(check(i) == true){
                if(sum+i <= s){
                    sum+= i;
                    nums.push_back(i);
                }
            else{
                break;
            }
            }
        }
            return nums;
    }
};