class Solution {
public:
    int compress(vector<char>& chars) {
        int len = chars.size();
        int cur = 0;
        for (int i = 0; i < len; i++) {
            int count = 1;
            for (int j = i + 1; j < len; j++) {
                if (chars[j] == chars[i]) {
                    count++;
                } else break;
            }
            if (count != 1) {
                string str = to_string(count);
                int s_len = str.length();
                chars[cur] = chars[i];
                for (int k = 0; k < s_len; k++) chars[cur + k + 1] = str[k];
                cur += s_len + 1;
                i = i + count - 1;
            } else {
                chars[cur] = chars[i];
                cur++;
            }
        }
        chars.resize(cur);
        return cur;
    }
};
