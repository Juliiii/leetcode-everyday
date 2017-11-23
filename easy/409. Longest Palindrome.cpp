class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> a;
        int count = 0;
        for (auto ss : s) {
            a[ss]++;
            if (a[ss] == 2) {
                count += 2;
                a[ss] = 0;
            }
        }
        bool flag = false;
        for (auto aa : a) {
            if (aa.second == 1) flag = true;
        }
        return flag ? count + 1 : count;
    }
};
