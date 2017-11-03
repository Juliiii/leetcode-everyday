class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = s.length();
        string group = "";
        bool flag = false;
        for (int i = 0; i < len; i++) {
            group += s[i];
            int steps = group.length();
            if (len == steps || len % steps != 0) continue;
            int j;
            for (j = i + 1; j < len; j += steps) {
                string cur = "";
                for (int k = 0; k < steps; k++) {
                    cur += s[j + k];
                }
                if (cur == group) {
                    cur = "";
                    continue;
                }
                else break;
            }
            flag = j >= len;
            if (flag) break;
        }
        return flag;
    }
};
