class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word == "") return false;
        bool mode = word[0] >= 'a' && word[0] <= 'z';
        bool hasSmall = false;
        int bigCount = 0;
        for (auto w : word) {
            if (w >= 'a' && w <= 'z') hasSmall = true;
            if (w >= 'A' && w <= 'Z') bigCount++;
            if (mode && w >= 'A' && w <= 'Z') return false;
            if (!mode && hasSmall && bigCount >= 2) return false;
        }
        return true;
    }
};
