class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        for (auto word : words) {
            int flag = -1;
            int i = 0;
            for (; i < word.length(); i++) {
                if (i == 0) {
                    flag = helper(tolower(word[i]));
                }
                if (flag != helper(tolower(word[i]))) {
                    break;
                }
            }
            if (i == word.length()) {
                res.push_back(word);
            }
        }
        return res;
    }
    
    int helper(char c) {
        if (c == 'q' || c == 'w' || c == 'e' || c == 'r'
           || c == 't' || c == 'y' || c == 'u' || c == 'i'
            || c == 'o' || c == 'p') {
            return 0;
        }
        if (c == 'z' || c == 'x' || c == 'c' || c == 'v'
            || c == 'b' || c == 'n' || c == 'm') {
            return 1;
        }
        return 2;
    }
};
