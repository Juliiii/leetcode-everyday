class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) return false;
        if (matrix[0].empty()) return false;
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[i][0] > target) continue;
            int left = 0;
            int right = matrix[i].size() - 1;
            while(left <= right) {
                int mid = (right - left) / 2 + left;
                if (matrix[i][mid] > target) right = mid - 1;
                else if (matrix[i][mid] < target) left = mid + 1;
                else return true;
            }
        }
        
        return false;
    }
};
