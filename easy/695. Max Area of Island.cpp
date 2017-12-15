class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;
        int res = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                int cnt = 0;
                helper(grid, cnt, res, i, j);
            }
        }
        return res;
    }
    
    void helper(vector<vector<int>>& grid, int& cnt, int& res, int x, int y) {
        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] <= 0) return;
        cnt++;
        grid[x][y] = -1;
        res = max(res, cnt);
        int dirs[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
        for (int i = 0; i < 4; i++) {
            helper(grid, cnt, res, x + dirs[i][0], y + dirs[i][1]);
        }
    }
};
