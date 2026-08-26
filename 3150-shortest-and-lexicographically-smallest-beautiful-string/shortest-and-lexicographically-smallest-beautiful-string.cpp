class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            string str = "";
            int cnt = 0;
            for (int j = i; j < n; j++) {
                str.push_back(s[j]);
                if (s[j] == '1') {
                    cnt++;
                }
                if (cnt == k) {
                    if (ans == "" || str.size() < ans.size() ||
                        (str.size() == ans.size() && str < ans)) {
                        ans = str;
                    }
                    break;
                }
            }
        }

            return ans;
        }
    };