class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        if (!numCourses) return true;
        vector<int> a[numCourses];
        for (int i = 0; i < prerequisites.size(); i++) {
            a[prerequisites[i].first].push_back(prerequisites[i].second);
        }
        vector<int> isVisited(numCourses, 0);
        for (int i = 0; i < numCourses; i++) {
            if (isVisited[i] == 0) {
                bool flag = false;
                helper(a, isVisited, i, flag);
                
                if (flag) return false;
            }
        }
        return true;
    }
    
    void helper(vector<int> a[], vector<int>& isVisited, int i, bool& flag) {
        if (isVisited[i] == 1) {
            flag = true;
            return;
        }
        if (isVisited[i] == -1) {
            return;
        }
        isVisited[i] = 1;
        for (int j = 0; j < a[i].size(); j++) {
            helper(a, isVisited, a[i][j], flag);
        }
        isVisited[i] = -1;
    }
};
