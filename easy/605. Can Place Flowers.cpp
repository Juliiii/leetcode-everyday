class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int> visited(flowerbed.size(), 0);
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 1) visited[i] = -1;
            else {
                if ((i - 1 >= 0 && flowerbed[i - 1] == 1) || (i + 1 < flowerbed.size() && flowerbed[i + 1] == 1)) {
                    visited[i] = 1;
                }
            }
        }
        
        for (int i = 0; i < visited.size(); i++) {
            if (visited[i] == 0) {
                n--;
                visited[i] = -1;
                if (i - 1 >= 0 && visited[i - 1] == 0) visited[i - 1] = 1;
                if (i + 1 < visited.size() && visited[i + 1] == 0) visited[i + 1] = 1;
            }
        }
        
        return n <= 0;
    }
};
