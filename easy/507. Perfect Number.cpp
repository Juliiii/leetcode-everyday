class Solution {
public:
    bool checkPerfectNumber(int num) {
        int reduce = 1;
        for (int i = 2; i < sqrt(num); i++) {
            if (num % i == 0) {
                reduce += i;
                reduce += num / i;
            }
        }
        return num == reduce && num != 1;
    }
};
