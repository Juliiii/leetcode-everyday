class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        map<char, char> a, b;
        
        for (int i = 0; i < s.length(); i++) {
            if (!a[s[i]]) {
                a[s[i]] = t[i];
            } else {
                char c = a[s[i]];
                if (c != t[i]) return false;
            }
        }
        
        for (int i = 0; i < t.length(); i++) {
            if (!b[t[i]]) {
                b[t[i]] = s[i];
            } else {
                char c = b[t[i]];
                if (c != s[i]) return false;
            }
        }
        
        return true;
    }
};
