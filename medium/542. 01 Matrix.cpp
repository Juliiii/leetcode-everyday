class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        if (matrix.empty()) return matrix;
        if (matrix[0].empty()) return matrix;
        
        queue<pair<int, int>> q;
        int dirs[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) q.push(make_pair(i, j));
                else matrix[i][j] = INT_MAX;
            }
        }
        
        while(!q.empty()) {
            auto p = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) {
                int x = p.first + dirs[i][0], y = p.second + dirs[i][1];
                if (x < 0 || y < 0 || x >= matrix.size() || y >= matrix[0].size()) continue;
                if (matrix[x][y] > matrix[p.first][p.second] && matrix[x][y] == INT_MAX) {
                    matrix[x][y] = matrix[p.first][p.second] + 1;
                    q.push(make_pair(x, y));
                }
            }
        }
        return matrix;
    }
};
