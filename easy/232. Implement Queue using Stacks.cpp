class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        a.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(!a.empty()) {
            b.push(a.top());
            a.pop();
        }
        int res = b.top();
        b.pop();
        while(!b.empty()) {
            a.push(b.top());
            b.pop();
        }
        return res;        
    }
    
    /** Get the front element. */
    int peek() {
        while(!a.empty()) {
            b.push(a.top());
            a.pop();
        }
        int res = b.top();
        while(!b.empty()) {
            a.push(b.top());
            b.pop();
        }
        return res;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return a.empty();
    }
private:
    stack<int> a;
    stack<int> b;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
