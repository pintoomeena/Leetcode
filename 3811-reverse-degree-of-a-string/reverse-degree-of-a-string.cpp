class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int sum=0;
        /*vector<int> nums(26, 0);
        for(int i=0; i<n; i++){
            nums[s[i]-'a']++;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
            }
        }
        return sum;*/
        for(int i=0; i<s.size(); i++){
            sum += (i+1)*(26-(s[i]-'a'));
        }
        return sum;
    }
};