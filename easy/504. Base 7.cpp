class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        bool neg = num < 0;
        int _num = neg ? -num : num;
        string res = "";
        while(_num) {
            res += to_string(_num % 7);
            _num /= 7;
        }
        if (neg) res += "-";
        reverse(res.begin(), res.end());
        return res;
    }
};
