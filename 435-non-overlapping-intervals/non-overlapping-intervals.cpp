class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n==1)return 0;
        sort(intervals.begin(), intervals.end());
        int cnt=0;
        int i=1;

        int back = intervals[0][1];
        while(i<n){
            if(intervals[i][0] < back){
                cnt++;
                back = min(back, intervals[i][1]);
                i++;
            }
            else {
                back = intervals[i][1];
                i++;
            }

        }
        //if(intervals[n-1][0] < intervals[n-2][1])cnt++;
        return cnt;
    }
};