class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        if (d.empty()) return "";
        if (d[0] == "") return "";
        if (s == "") return "";
        sort(d.begin(), d.end(), [](string a, string b){
            if (a.length() == b.length()) return a < b;
            return a.length() > b.length();
        });
        
        
        for (auto dd : d) {
            int i = 0;
            for (int j = 0; j < s.length(); j++) {
                if (s[j] == dd[i]) {
                    i++;
                }
            }
            if (i == dd.length()) return dd;
        }
        return "";
    }
    
    
};
