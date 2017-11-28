class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;
        if (matrix.size() == 1) return matrix[0];
        if (matrix[0].size() == 1) {
            for (auto m : matrix) res.push_back(m[0]);
            return res;
        }
        
        int start = 0;
        int m = matrix.size(), n = matrix[0].size(), end = m * n;
        
        int top = 0, left = 0, right = n, bottom = m;
        while(true) {
            for (int i = left; i < right; i++) {
                res.push_back(matrix[top][i]);
                start++;
            }
            if (start == end) break;           
            
            top++;
            for (int i = top; i < bottom; i++) {
                res.push_back(matrix[i][right - 1]);
                start++;
            }
            if (start == end) break;
            right--;
            for (int i = right - 1; i >= left; i--) {
                res.push_back(matrix[bottom - 1][i]);
                start++;               
            }
            if (start == end) break;
            bottom--;
            for (int i = bottom - 1; i >= top; i--) {
                res.push_back(matrix[i][left]);
                start++;                    
            }
            left++;
            if (start == end) break;
        }
        return res;
    }
};
