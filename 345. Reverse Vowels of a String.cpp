class Solution {
public:
    string reverseVowels(string s) {
        vector<int> a;
        vector<char> b;
        for (int i = 0; i < s.length(); i++) {
            if (isVowels(s[i])) {
                b.push_back(s[i]);
                a.push_back(i);
            }
        }
        
        for (int i = 0; i < a.size(); i++) {
            s[a[i]] = b[a.size() - 1 - i];
        }
        return s;
    }
    
    bool isVowels(char a) {
        return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U';
    }
};
