class Solution {
public:
    int longestValidParentheses(string s) {
        int left =0;
        int right = 0;
        int maxi = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(')left++;
            else right++;
            if(right == left){
                maxi = max(maxi, 2*right);
            }
            else if(right > left){
                left = right = 0;
            }
        }
        left = right = 0;

        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == '(')left++;
            else right++;
            if(right == left){
                maxi = max(maxi, 2*right);
            }
            else if(right < left){
                left = right = 0;
            }
        }
        return maxi;
    }
};