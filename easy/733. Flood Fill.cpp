class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (image.empty()) return image;
        if (image[0].empty()) return image;
        int m = image.size(), n = image[0].size();
        if (sr < 0 || sr >= m || sc < 0 || sc >= n) return image;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == sr && j == sc) {
                    helper(image, i, j, newColor, image[i][j]);
                }
            }
        }
        return image;
    }
    
    void helper(vector<vector<int>>& image, int x, int y, int newColor, int val) {
        if (x < 0 || y < 0 || x >= image.size() || y >= image[0].size() || image[x][y] != val || image[x][y] == newColor) return;
        image[x][y] = newColor;
        helper(image, x, y + 1, newColor, val);
        helper(image, x, y - 1, newColor, val);
        helper(image, x + 1, y, newColor, val);
        helper(image, x - 1, y, newColor, val);
    }
};
