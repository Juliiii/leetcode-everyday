class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<char, int> a, b;
        for (auto ss : s) {
            a[ss]++;
        }
        for (auto tt : t) {
            b[tt]++;
        }
        for (auto aa : a) {
            if (a[aa.first] != b[aa.first]) return false;
        }
        
        return true;
    }
};
