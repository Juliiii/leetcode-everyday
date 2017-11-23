class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() == 0) return true;
        string newly = "";
        string newly_copy = "";
        for (auto ss : s) {
            if (isAlphanumeric(ss)) {
                newly += becomeSmall(ss);
            }
        }
        for (int i = newly.length() - 1; i >= 0; i--) newly_copy += newly[i];

        return newly == newly_copy;
    }
    
    bool isAlphanumeric(char a) {
        return (a >= 'a' && a<='z') || (a <= 'Z' && a >= 'A') || (a >= '0' && a <= '9');
    }
    
    char becomeSmall(char a) {
        if (a >= 'A' && a <= 'Z') return a - 'A' + 'a';
        return a;
    }
};
