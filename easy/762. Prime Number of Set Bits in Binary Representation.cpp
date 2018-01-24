class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int res = 0;
        for (int i = L; i <= R; i++) {
            if (isPrimer(getCount(i))) res++;
        }
        return res;
    }
    
    bool isPrimer(int n) {
        if (n == 0 || n == 1) return false;
        if (n == 2 || n == 3) return true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    
    int getCount(int n) {
        int num = 0;
        while(n) {
            num += (n & 1);
            n = n >> 1;
        }
        return num;
    }
};
