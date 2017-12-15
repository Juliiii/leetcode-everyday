class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> stk;
        for (auto op : ops) {
            if (op == "+") {
                if (!stk.empty()) {
                    int first = stk.top();
                    stk.pop();
                    if (!stk.empty()) {
                        int sum = first + stk.top();
                        stk.push(first);
                        stk.push(sum);
                    }
                }
            } else if (op == "D") {
            if (!stk.empty()) {
                int val = stk.top();
                stk.push(2 * val);
            }
            } else if (op == "C") {
                if (!stk.empty()) stk.pop();
            } else {
                stk.push(stoi(op));
            }
        }
        int res = 0;
        while(!stk.empty()) {
            res += stk.top();
            stk.pop();
        }
        return res;
    }
};
