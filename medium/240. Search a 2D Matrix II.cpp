class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) return false;
        if (matrix[0].empty()) return false;
        int start = 0;
        for (start = 0; start < matrix.size(); start++) {
            if (matrix[start][0] > target) break;
        }
        
        bool res = false;
        helper(matrix, 0, start == matrix.size() ? start - 1 : start, res, target);
        return res;
        
    }
    
    void helper(vector<vector<int>>& matrix, int left, int right, bool& res, int target) {
        if (res) return;
        if (left > right) return;
        int mid = (right - left) / 2 + left;
        int _left = 0, _right = matrix[mid].size() - 1;
        while(_left <= _right) {
            int _mid = (_right - _left) / 2 + _left;
            if (matrix[mid][_mid] > target) _right = _mid - 1;
            else if (matrix[mid][_mid] < target) _left = _mid + 1;
            else {
                res = true;
                return;
            }
        }
        
        helper(matrix, left, mid - 1, res, target);
        helper(matrix, mid + 1, right, res, target);
    }
};
