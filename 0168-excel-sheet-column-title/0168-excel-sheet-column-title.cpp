class Solution {
public:
    string convertToTitle(int columnNumber) {
        string all = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int n = columnNumber;
        
        string ans = "";
        while(n > 0) {
            n--;
            int k = n % 26;
            ans += all[k];
            n /= 26;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};