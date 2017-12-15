class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;
        int res = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                int cnt = 0;
                if (grid[i][j] != 0) {
                    int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
                    for (int k = 0; k < 4; k++) {
                        int x = i + dirs[k][0], y = j + dirs[k][1];
                        if (x < 0 || y < 0 || y >= grid[0].size() || x >= grid.size() || grid[x][y] == 0) cnt++;
                    }
                    res += cnt;
                }
            }
        }
        return res;
    }
};
