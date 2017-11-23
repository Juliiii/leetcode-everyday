class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> v = split(str);
        if (pattern.length() != v.size()) return false;
        map<char, string> a;
        map<string, char> b;
        for (int i = 0; i < v.size(); i++) {
            if (a.find(pattern[i]) == a.end() && b.find(v[i]) == b.end()) {
                a[pattern[i]] = v[i];
                b[v[i]] = pattern[i];
            } else if (a.find(pattern[i]) != a.end() && b.find(v[i]) != b.end()) {
                if (a[pattern[i]] != v[i]) return false;
            } else return false;
        }
        return true;
    }
    
    vector<string> split(string str) {
        str += " ";
        string cur = "";
        vector<string> res;
        for (auto s : str) {
            if (s == ' ') {
                res.push_back(cur);
                cur = "";
            } else {
                cur += s;
            }
        }
        
        return res;
    }
};
