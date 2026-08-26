class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int i=0;
        int j = i+k-1;
        int cnt=0;
        for(int k=i; k<=j;k++){
            if(s[k] == 'a' || s[k] == 'e'|| s[k] == 'i' ||s[k] == 'o' || s[k] == 'u'){
                cnt++;
            }
        }
        int maxi = cnt;
        
        while(j<n){
            j++;
            if(s[j] == 'a' || s[j] == 'e'|| s[j] == 'i' ||s[j] == 'o' || s[j] == 'u'){
                cnt++;
            }
            if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' ||s[i] == 'o' || s[i] == 'u'){
                cnt--;
            }
                i++;
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};