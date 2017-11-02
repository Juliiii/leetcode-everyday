class Solution {
public:
    int findNthDigit(int n) {
        long long digitnum = 1;
        long long cons = 9;
        
        while(n) {
            if (n <= digitnum * cons) {
                long long offset = n % digitnum == 0 ? digitnum : n % digitnum;
                long long num = ceil(n / (digitnum + 0.0)) - 1;
                long long init = power(digitnum);
                long long target = init + num;
                long long res = 0;
                for (int i = 0; i <= digitnum - offset; i++) {
                    res = target % 10;
                    target = target / 10;
                }
                return res;
                
            } else {
                n -= digitnum * cons;
                digitnum++;
                cons *= 10;
            }
        }
    }
    
    long long power(int n) {
        long long res = 1;
        for (int i = 0; i < n - 1; i++) res *= 10;
        return res;
    }
};
