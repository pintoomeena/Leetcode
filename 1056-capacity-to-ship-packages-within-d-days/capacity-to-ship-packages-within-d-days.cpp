class Solution {
public:
    int check(vector<int>& weights, int cap){
        int day = 1;
        int load = 0;
        for(int it : weights){
            if(it + load > cap){
                day++;
                load = it;
            }
            else{
                load += it;
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans=0;
        while(low<=high){
            int mid = low+(high-low)/2;
            int day = check(weights, mid);
            if(day <= days){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};