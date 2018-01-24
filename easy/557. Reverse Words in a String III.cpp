class Solution {
public:
    string reverseWords(string s) {
        s += " ";
        string res = "";
        string unit = "";
        for (auto ss : s) {
            if (ss != ' ') {
                unit += ss;
            } else {
                reverse(unit.begin(), unit.end());
                res += unit;
                res += " ";
                unit = "";
            }
        }
        return res.substr(0, res.length() - 1);
    }
};
