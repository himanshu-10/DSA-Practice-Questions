class Solution {
public:
    string longestPalindrome(string S) {
        int start = 0;
        int maxLen = 1;
        
        for (int i = 1; i < S.length(); i++) {
            // even
            int l = i - 1;
            int r = i;
            
            while (l >= 0 && r < S.length() && S[l] == S[r]) {
                if (r - l + 1 > maxLen) {
                    maxLen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
            
            // odd
            l = i - 1;
            r = i + 1;
            
            while (l >= 0 && r < S.length() && S[l] == S[r]) {
                if (r - l + 1 > maxLen) {
                    maxLen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
        }
        
        return S.substr(start, maxLen);
    }
};