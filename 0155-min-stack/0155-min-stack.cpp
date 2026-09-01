class MinStack {
public:
    stack<long long> s;
    long long mini;
    MinStack() {
        
    }
    void push(int val) {
        if (s.empty()) {
            s.push(val);
            mini = val;
        }
        else {
            if (val < mini) {
                s.push(2LL * val - mini);
                mini = val;
            }
            else {
                s.push(val);
            }
        }
    }
    void pop() {
        if (s.top() < mini) {
            mini = 2 * mini - s.top();
        }
        s.pop();
    }
    int top() {
        if (s.top() < mini) {
            return mini;
        }
        return s.top();
    }
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */