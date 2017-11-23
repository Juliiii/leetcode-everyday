class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minCol = n, minRow = m, len = ops.size();
        for(int i = 0; i < len; i++) {
            minCol = minCol > ops[i][1] ? ops[i][1] : minCol;
            minRow = minRow > ops[i][0] ? ops[i][0] : minRow;
        }
        return minCol * minRow;
    }
};
