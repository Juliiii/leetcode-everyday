class Solution {
public:
    string addBinary(string a, string b) {
        int la = a.length() - 1;
        int lb = b.length() - 1;
        string res = "";
        int sum;
        int carry = 0;
        while(la != -1 && lb != -1) {
            sum = stoi(a[la]) + stoi(b[lb]) + carry;
            carry = sum / 2;
            sum = sum % 2;
            res = to_string(sum) + res;
            la--;
            lb--;
        }
        
        while(la != -1) {
            sum = stoi(a[la]) + carry;
            carry = sum / 2;
            sum = sum % 2;
            res = to_string(sum) + res;
            la--;
        }
        
        while(lb != -1) {
            sum = stoi(b[lb]) + carry;
            carry = sum / 2;
            sum = sum % 2;
            res = to_string(sum) + res;
            lb--;
        }
        
        if (carry) {
            res = "1" + res;
        }
        
        return res;
    }
    
    int stoi(char a) {
        return a - '0';
    }
};
