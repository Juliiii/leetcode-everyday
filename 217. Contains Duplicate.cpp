class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for (auto num : nums) s.insert(num);
        
        return s.size() != nums.size();
    }
};
