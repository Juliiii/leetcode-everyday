//Determine whether an integer is a palindrome. Do this without extra space.
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
		string str1 = str;
		reverse(str1.begin(), str1.end());
		return str1 == str;
    }
};
