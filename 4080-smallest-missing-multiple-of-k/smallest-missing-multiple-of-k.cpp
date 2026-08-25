class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int it : nums){
            mpp[it]++;
        }
        for(int i=k; i<=200; i += k){
            if(mpp.find(i) == mpp.end()){
                return i;
            }
        }
        return 0;
    }
};