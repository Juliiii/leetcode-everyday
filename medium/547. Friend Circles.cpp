
class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        if (M.empty()) return 0;
        if (M[0].empty()) return 0;
        
        int res = 0;
        vector<bool> visited(M.size(), false);
        
        for (int i = 0; i < M.size(); i++) {
            for (int j = 0; j < M[0].size(); j++) {
                if (!visited[j] && M[i][j]) {
                    res++;
                    helper(M, i, visited);
                }
            }
        }
        
        return res;
    }
    
    void helper(vector<vector<int>>& M, int i, vector<bool>& visited) {
        visited[i] = true;
        
        for (int j = 0; j < M[0].size(); j++) {
            if (visited[j] || !M[i][j]) continue;
            helper(M, j, visited);
        }
    }
};
