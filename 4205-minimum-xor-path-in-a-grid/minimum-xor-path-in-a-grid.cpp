class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        auto nums = grid;
        vector<vector<bool>> dp(m, vector<bool>(1024, false));
        dp[0][nums[0][0]] = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0 && j==0)continue;
                vector<bool> nxt(1024, false);
                int val = nums[i][j];
                for(int k=0; k<1024; k++){
                    if((i>0 && dp[j][k]) || (j>0 && dp[j-1][k])){
                        nxt[k^val] = true;
                    }
                }
                dp[j] = nxt;
            }
        }
        for(int k=0; k<1024; k++){
            if(dp[m-1][k]) return k;
        }
        return -1;
        
    }
};