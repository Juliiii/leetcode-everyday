class Solution {
public:
    bool isValid(string s) {
    	stack<char> stk;
    	
    	for (auto ss : s) {
    		if (stk.empty()) {
    			if (ss == ']' || ss == '}' || ss == ')') return false;
    			stk.push(ss);
			} else {
				if (ss == '[' || ss == '{' || ss == '(') {
					stk.push(ss);
				} else {
					if (ok(stk.top(), ss)) {
						stk.pop();
					} else {
						stk.push(ss);
					}
				}
			}
		}
		return stk.empty(); 
    }
    
    bool ok(char a, char b) {
    	return (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}');
	}
};
