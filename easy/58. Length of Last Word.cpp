class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s == " ") return 0;
        int len = s.length();
        int newL = s.length();
        int i;
        for (i = len - 1; i>= 0; i--) {
            if (s[i] == ' ') {
                newL--;
            } else {
                break;
            }
        }
        if (newL == 0) return 0;
        for(i = newL - 1; i>= 0; i--) {
            if (s[i] == ' ') break;
        }
        string last = s.substr(i + 1, newL - i - 1);
        return last.length();
    }
};
