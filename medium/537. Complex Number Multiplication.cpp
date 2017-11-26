class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        string s_s_a = "";
        string s_s_b = "";
        int a_start = 0;
        int b_start = 0;
        
        string s_e_a = "";
        string s_e_b = "";
        for (auto aa : a) {
            if (aa == '+') break;
            s_s_a += aa;
            a_start++;
        }
        
        for (auto bb : b) {
            if (bb == '+') break;
            s_s_b += bb;
            b_start++;
        }
        for (a_start=a_start + 1; a_start < a.length() - 1; a_start++) {
            s_e_a += a[a_start];
        }
        for (b_start=b_start + 1; b_start < b.length() - 1; b_start++) {
            s_e_b += b[b_start];
        }
        
        int s_a = stoi(s_s_a);
        int s_b = stoi(s_s_b);
        int e_a = stoi(s_e_a);
        int e_b = stoi(s_e_b);
        
        int s = s_a * s_b - e_a * e_b;
        int x = s_a * e_b + s_b * e_a;
        return to_string(s)+"+"+to_string(x)+"i";
    }
};
