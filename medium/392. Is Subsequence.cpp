class Solution {
public:
    bool isSubsequence(string s, string t) {
    	int pointS, pointT;
    	pointS = pointT = 0;
  		while(pointS != s.length()) {
  			if (pointT == t.length()) return false;
  			if (s[pointS] == t[pointT]) {
  				pointS++;
  				pointT++;
  			} else pointT++;
  		}
  		return true;
    }
};
