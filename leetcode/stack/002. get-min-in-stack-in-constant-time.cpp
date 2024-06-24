//? 1. Create another stack to store the minimum element at every point. Change the value if the new value is less than the current minimum.
//! TC: O(1) SC: O(n)
// https://leetcode.com/problems/min-stack/submissions/1286462850

class MinStack {
private:
    stack<int> stk;
    stack<int> minStk;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        
        if (minStk.empty() || val<minStk.top()) {
            minStk.push(val);
        } else {
            minStk.push(minStk.top());
        }
    }
    
    void pop() {
        stk.pop();
        minStk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStk.top();
    }
};