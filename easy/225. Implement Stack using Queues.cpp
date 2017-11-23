class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int size = q.size();
        int res;
        while(!q.empty()) {
            if (size == 1) {
                res = q.front();
            } else {
                p.push(q.front());
            }
            size--;
            q.pop();
        }
        while(!p.empty()) {
            q.push(p.front());
            p.pop();
        }
        return res;
    }
    
    /** Get the top element. */
    int top() {
        return q.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty() && p.empty();
    }
private:
    queue<int> q;
    queue<int> p;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */
