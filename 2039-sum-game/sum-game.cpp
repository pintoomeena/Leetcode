class Solution {
public:
    bool sumGame(string nums) {
        int N = nums.size();
        int n = N/2;
        int sum1 = 0;
        int sum2 = 0;
        int q1=0;
        int q2=0;
        for(int i=0; i<n; i++){
            if(nums[i] == '?'){
                q1++;
            }
            else{
            sum1 += nums[i]-'0';
            }
        }
        for(int i=n; i<2*n; i++){
            if(nums[i] == '?'){
                q2++;
            }
            else{
            sum2 += nums[i]-'0';
            }
        }
        if((q1+q2)%2==1)return true;
        return sum1 + 9*q1/2 != sum2 + 9*q2/2;
    }
};