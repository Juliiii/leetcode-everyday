class Solution {
public:
    int countSegments(string s) {
        s += " ";
        string block = "";
        int count = 0;
        for (auto ss : s) {
            if (ss == ' ') {
                if (block != "") {
                    count++;
                    block = "";
                }
            } else block += ss;
        }
        
        return count;
    }
};
