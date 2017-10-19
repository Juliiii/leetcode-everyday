class Solution {
public:
    string countAndSay(int n) {
        string origin = "1";
        string res = "";
        if (!n) return "";
        if (n == 1) return origin;
        for (int i = 2; i <= n; i++) {
        	int count = 0;
        	for (int j = 0; j < origin.length(); j++) {
        		char cur = origin[j];
        		while(j != origin.length() && origin[j] == cur) {
        			j++;
        			count++;
				}
				
				res = res + to_string(count) + cur;
				count = 0;
				j--;
			}
			origin = res;
			res = "";
		}
		
		return origin;
    }
};
