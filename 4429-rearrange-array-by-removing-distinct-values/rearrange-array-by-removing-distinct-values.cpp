class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        map<int, int> mpp;

        for (int it : nums) {
            mpp[it]++;
        }

        while (!mpp.empty()) {
            for (auto it=mpp.begin(); it != mpp.end();){
                ans.push_back(it->first);
                it->second--;
                if(it->second==0){
                 it = mpp.erase(it);
                }
                else{
                    it++;
                }
            }
        }

        return ans;
    }
};