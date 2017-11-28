class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res;
        if (n <= 0) return res;
        for (int i = 0; i < n; i++) {
            vector<int> cur;
            for (int j = 0; j < n; j++) {
                cur.push_back(0);
            }
            res.push_back(cur);
        }
        
        int p = 1, end = n * n;
        int top = 0, bottom = n, left = 0, right = n;
        while(p <= end) {
            for (int i = left; i < right; i++) {
                res[top][i] = p;
                p++;
            }
            top++;
            for (int i = top; i < bottom; i++) {
                res[i][right - 1] = p;
                p++;
            }
            right--;
            for (int i = right - 1; i >= left; i--) {
                res[bottom - 1][i] = p;
                p++;
            }
            bottom--;
            
            for (int i = bottom - 1; i >= top; i--) {
                res[i][left] = p;
                p++;
            }
            left++;
        }
        return res;
    }
};
