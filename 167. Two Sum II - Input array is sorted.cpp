class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> m;
        vector<int> res;
        for (int i = 0; i < numbers.size(); i++) {
            if (m[target - numbers[i]]) {
                res.push_back(m[target - numbers[i]]);
                res.push_back(i + 1);
            } else {
                m[numbers[i]] = i + 1;
            }
        }
        return res;
    }
};
