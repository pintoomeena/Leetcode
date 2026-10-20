class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n=nums.size();
        int ans=0;

        auto check = [&](int k){
            int prevmax = 0;

            for(int i=0;i<n; i=i+k){
                int cnt = 0;
                int mini = nums[i];
                int maxi = nums[i];
                for(int j=i; j<i+k-1; j++){
                    if(nums[j] > nums[j+1]){
                        cnt++;
                    }
                    mini = min(mini, nums[j+1]);
                    maxi = max(maxi, nums[j+1]);
                }

                if(nums[i+k-1] > nums[i]){
                    cnt++;
                }
                if(cnt > 1|| mini<prevmax){
                    return false;
                }
                prevmax = maxi;
            }
            return true;
        };
        for(int i=1; i*i<=n; i++){
            if(n%i == 0){
                if(check(i)){
                    ans = ans+i;
                    
                }
                if(i!=n/i && check(n/i)){
                    ans = ans+n/i;
                }
            }
        }
        return ans;
        
    }
};