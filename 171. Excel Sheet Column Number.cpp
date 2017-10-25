class Solution {
public:
    int titleToNumber(string s) {
        
        char m[26];
        for (int i = 0; i < 26; i++) m[i] = 'A' + i;
        long long res = 0;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++) {
            long long k = 1;
            for (int j = 1; j <= i; j++) k *= 26;
            res += k * (s[i] - 'A' + 1);
        }
        return res;
    }
};
