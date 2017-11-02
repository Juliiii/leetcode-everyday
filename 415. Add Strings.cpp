class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.length();
        int len2 = num2.length();
        
        string res = "";
        int carry = 0;
        while(len1 && len2) {
            int num = num1[len1 - 1] - '0' + num2[len2-1] - '0' + carry;
            res += to_string(num % 10);
            carry = num / 10;
            len1--;
            len2--;
        }
        
        while(len1) {
            int num = num1[len1 - 1] - '0' + carry;
            res += to_string(num % 10);
            carry = num / 10;
            len1--;
        }
        
        while(len2) {
            int num = num2[len2 - 1] - '0' + carry;
            res += to_string(num % 10);
            carry = num / 10;
            len2--;
        }
        
        if (carry != 0) res += to_string(carry);
        
        reverse(res.begin(), res.end());
        return res;
        
        
    }
};
