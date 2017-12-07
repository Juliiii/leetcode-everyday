class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        for (int i = 0; i <= num; i++) {
            if (i == 0) res.push_back(0);
            if (i == 1 || i == 2) res.push_back(1);
            if (i == 3) res.push_back(2);
            if (i > 3) {
                res.push_back(i % 2 == 0 ? res[i / 2] : res[i / 2] + 1);
            }
        }
        return res;
    }
};
