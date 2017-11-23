class Solution {
public:
    string reverseStr(string s, int k) {
        string ans = "";
        int len = s.length();
        for (int i = 0; i < len; i+= 2*k) {
            int len1 = len - i < k ? len - i : k;
            for (int j = 0; j < len1; j++) {
                ans += s[i + len1 - 1 - j];
            }
            if (len - i < k) continue;
            len1 = len - i + 1 < 2*k ? len - i + 1 - k: k;
            for (int j = 0; j < len1; j++) {
                ans += s[i + j + k];
            }
        }
        return ans;
        
    }
};
