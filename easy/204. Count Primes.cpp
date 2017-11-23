class Solution {
public:
    int countPrimes(int n) {
        vector<int> a;
        for(int i = 0; i < n; i++) a.push_back(0);
        
        for (int i = 2; i <= sqrt(n); i++) {
            if (a[i] == 1) continue;
            bool is = isPrime(i);
            if (is) {
                int pow = 2;
                int k = pow * i;
                while(k < n) {
                    a[k] = 1;
                    pow++;
                    k = pow * i;
                }
            } else a[i] = 1;
        }
        int res = 0;
        for (int i = 2; i < n; i++) {
            if (a[i] == 0) res++;
        }
        return res;
    }
    
    bool isPrime(int n) {
        int i = 2;
        while(i <= sqrt(n)) {
            if (n % i == 0) return false;
            i++;
        }
        return true;
    }
};
