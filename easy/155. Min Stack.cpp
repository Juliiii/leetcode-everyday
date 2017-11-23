class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        stk.push(x);
        if (minq.empty() || x <= minq.top()) {
            minq.push(x);
        }
    }
    
    void pop() {
        if (!stk.empty()) {
            int num = stk.top();
            stk.pop();
            if (minq.top() == num) {
                minq.pop();
            }
        }
    }
    
    int top() {
        if (!stk.empty()) {
            return stk.top();
        } 
    }
    
    int getMin() {
        return minq.top();
    }
    
private:
    stack<int> minq;
    stack<int> stk;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
