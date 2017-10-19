class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack == "" && haystack == needle) return 0;
        if (needle == "") return 0;
        if (haystack.length() < needle.length()) return -1;
        int index = -1;
        
        for (int i = 0; i < haystack.length() - needle.length() + 1; i++) {
            if (haystack[i] == needle[0]) {
                int j;
                for (j = 0; j < needle.length(); j++) {
                    if (needle[j] != haystack[j + i]) break;
                }
                if (j == needle.length()) {
                    index = i;
                    break;
                }
            }
        }
        
        return index;
    }
};

