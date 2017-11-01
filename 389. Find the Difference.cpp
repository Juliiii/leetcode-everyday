class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1 = 0, sum2 = 0;
        for (auto ss : s) {
            sum1 += ss - 'a';
        }
        for (auto tt : t) {
            sum2 += tt - 'a';
        }
        
        int ans = sum2 - sum1;
        return 'a' + ans;
    }
};
