class Solution {
public:
    string toHex(int num) {
        if (num == -2147483648) return "80000000";
        string res = "";
        if (num > 0) {
            while(num) {
                res += _toHex(num % 16);
                num /= 16;
            }
            reverse(res.begin(), res.end());
        } else if (num < 0) {
            string digits = "";
            num = -num;
            while(num) {
                digits += to_string(num % 2);
                num /= 2;
            }
            
            if (digits.length() < 32) {
                int len = digits.length();
                for (int i = 0; i < 32 - len; i++) {
                    digits += "0";
                }
                for (int i = 0; i < 32; i++) {
                    if (digits[i] == '0') {
                        digits[i] = '1';
                    } else {
                        digits[i] = '0';
                    }
                }
                int carry = 1;
                for (int i = 0; i < 32; i++) {
                    int sum = digits[i] - '0' + carry;
                    if (sum >= 2) {
                        sum = 0;
                        carry = 1;
                    } else {
                        carry = 0;
                    }
                    digits[i] = sum + '0';
                }
                reverse(digits.begin(), digits.end());
                string _res = "";
                for (int i = 0; i < digits.length(); i+=4) {
                    int num = (digits[i] - '0') * 8 + (digits[i + 1] - '0') * 4 + (digits[i + 2] - '0') * 2 + (digits[i + 3] - '0');
                    _res += _toHex(num);
                }
                res = _res;
            }
        } else {
            res = "0";
        }
        
        return res;
    }
    
    char _toHex(int num) {
        return num < 10 ? num + '0' : 'a' + num - 10;
    }
};
