class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> ans;
        int len = nums.size();
        string levels[3] = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        for (auto num : nums) {
            int count = 0;
            for (auto _num : nums) {
                if (num < _num) count++;
            }
            ans.push_back(count < 3 ? levels[count] : to_string(count + 1));
        }
        return ans;
    }
};
