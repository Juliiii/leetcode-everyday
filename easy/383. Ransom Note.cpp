class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> ma;
        for (auto _ : magazine) {
            ma[_]++;
        }
        
        for (auto _ : ransomNote) {
            ma[_]--;
            if (ma[_] == -1) return false;
        }
        return true;
    }
};
