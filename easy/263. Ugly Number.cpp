class Solution {
public:
    bool isUgly(int num) {
        if (num == 0) return false;
        while (num != 1) {
            bool flag = ugly(num);
            if (!flag) return false;
            num = newUgly(num);
        }
        
        return true;
    }
    
    bool ugly(int num) {
        return num % 2 == 0 || num % 3 == 0 || num % 5 == 0;
    }
    
    int newUgly(int num) {
        if (num % 5 == 0) return num / 5;
        if (num % 3 == 0) return num / 3;
        if (num % 2 == 0) return num / 2;
    }
    
    
};
