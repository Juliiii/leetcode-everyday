class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if (strs.size() == 0) return res;
        if (strs.size() == 1) return strs[0];
        string first = strs[0];
        string second = strs[1];
        int min = first.length() > second.length() ? second.length() : first.length();
        for (int i = 0; i < min; i++ ) {
            if (first[i] == second[i]) {
                res += first[i];
            } else {
                break;
            }
        }
        string str = "";
        for (int i = 2; i < strs.size(); i++) {
            min = strs[i].length() > res.length() ? res.length() : strs[i].length();
            for (int j = 0; j < min; j++) {
                if (strs[i][j] == res[j]) {
                    str += res[j];
                } else {
                    break;
                }
            }
            res = str;
            str = "";
        }
        
        return res;
    }
};

