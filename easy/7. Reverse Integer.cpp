//Reverse digits of an integer.
//
//Example1: x = 123, return 321
//Example2: x = -123, return -321
//
//click to show spoilers.
//
//Note:
//The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.


#include <iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int reverse(int x) {
    	if (x == 0) return x;
        int sign = x > 0 ? 1 : 0;
        x = sign == 1 ? x : -x;
        string str = to_string(x);
        std::reverse(str.begin(), str.end());
        int i = 0;
        while (str[i] == '0') { i++; }
        str = str.substr(i, str.length() - i);
        // 用longlong 不然溢出，抛出错误 
        long long res = stoll(str);
        res = sign ? res : -res;
        if (res > INT_MAX || res < INT_MIN) return 0;
        return res;
    }
};

int main () {
	Solution s;
	cout<<s.reverse(1534236469)<<endl;
	return 0;
}
