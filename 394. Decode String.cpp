class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        int start = 0;
        dfs(ans, start, s.length(), s);
        return ans;
    }
    
    bool isNum(char c) {
        return c >= '0' && c <= '9';
    }
    
    bool isZimu(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }
    
    void dfs(string& cur, int& i, int len, string origin) {
        string num = "";
        string zu = "";
        for (; i < len; i++) {
            char c = origin[i];
            if (isNum(c)) {
                num += c;
            }
            if (c == '[') {
                i++;
                dfs(zu, i, len, origin);
                int count = stoi(num);
                for (int j = 0; j < count; j++) cur += zu;
                zu = "";
                num = "";
            }
            
            if (c == ']') {
                return;
            }
            
            if (isZimu(c)) cur += c;
        }
    }
    
    
};
