class Solution {
public:
    int hammingDistance(int x, int y) {
        string xx = "", yy = "";
        while(x) {
            xx += to_string(x % 2);
            x /= 2;
        }
        while(y) {
            yy += to_string(y % 2);
            y /= 2;
        }
        int xxl = xx.length(), yyl = yy.length();
        if (xxl > yyl) {
            for (int i = 0; i < xxl - yyl; i++) {
                yy += "0";
            }
        } else if (xxl < yyl) {
            for (int i = 0; i < yyl - xxl; i++) {
                xx += "0";
            }
        }
        int ans = 0;
        int len = xx.length();
        for (int i = 0; i <len; i++) {
            if (xx[i] != yy[i]) ans++;
        }
        return ans;
    }
};
