class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int f_max = INT_MIN;
        for (auto num : nums) {
            if (num > f_max) f_max = num;
        }
        
        int s_max = INT_MIN;
        for (auto num : nums) {
            if (num > s_max && num != f_max) s_max = num;
        }
        
        int t_max = INT_MIN;
        bool exist = false;
        
        for (auto num : nums) {
            if (num >= t_max && num != f_max && num != s_max) {
                t_max = num;
                exist = true;
            }
        }
        
        return exist ? t_max : f_max;
    }
};
