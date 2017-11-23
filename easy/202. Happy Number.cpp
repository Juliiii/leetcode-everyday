class Solution {
public:
    bool isHappy(int n) {
        int count = 0;
        while(n != 1) {
            if (count >= 10000) return false;
            count++;
            long long sum = 0;
            while(n) {
                int mod = n % 10;
                n = n / 10;
                sum += mod * mod;
            }
            n = sum;
        }
        return true;
    }
};
