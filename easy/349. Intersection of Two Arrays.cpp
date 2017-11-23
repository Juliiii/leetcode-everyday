class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a, b;
        vector<int> c;
        for (auto num : nums1) a.insert(num);
        for (auto num : nums2) b.insert(num);
        
        for (auto it = a.begin(); it != a.end(); it++) {
            if (b.find(*it) != b.end()) c.push_back(*it);
        }
        return c;
    }
};
