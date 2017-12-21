class Solution {
public:
    int minSteps(int n) {
        if (n == 1) return 0;
        if (n == 2) return 2;
        if (n == 3) return 3;
        vector<int> v(n+1, INT_MAX);
        v[1] = 0;
        v[2] = 2;
        v[3] = 3;
        for (int i = 4; i <= n; i++) {
            for (int j = i - 1; j >= 1; j--) {
                if (i % j == 0) {
                    v[i] = min(v[i], v[j] + i / j);
                }
            }
        }
        return v[v.size() - 1];
    }
};
