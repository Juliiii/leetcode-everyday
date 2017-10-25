class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int sum, carry = 0;
        for (int i = 0; i < digits.size(); i++) {
            sum = i == 0 ? digits[i] + carry + 1 : digits[i] + carry;
            carry = sum / 10;
            sum = sum % 10;
            digits[i] = sum;
        }
        if (carry) {
            digits.push_back(carry);
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};
