#include<iostream>
using namespace std;

//? implement stack with getMin in O(1) time but O(n) space
class SpecialStack1 {
    int *arr; //array used as stack
    int *min; 
    int s, top;

    public:
        SpecialStack(int N, int S) {
            s = S;
            top = 0;
            arr = new int[s];
            min = new int[s];
        }
            
        void push(int data) {
            if(top == 0) {
                arr[top] = data;
                min[top] = data;
                top++;
            } else {
                arr[top] = data;
                min[top] = data < min[top-1] ? data : min[top-1];
                top++;
            }
        }

        void pop() {
            if(top == 0) {
                return;
            }
            top--;
        }

        int top() {
            if(top == 0) {
                return -1;
            }
            return arr[top-1];
        }

        int getMin() {
            if(top == 0) {
                return -1;
            }
            return min[top-1];
        }  
};

//? implement stack with getMin in O(1) time & O(1) space
class SpecialStack {
    stack<int> s;
    int mini;

    public:
        
    void push(int data) {
        if(s.empty()) {
            s.push(data);
            mini = data;
        } else {
            if(data<mini) {
                int newVal = 2*data-mini;
                s.push(newVal);
                mini = data;
            } else {
                s.push(data);
            }
        }
    }

    void pop() {
        if(s.empty())
            return -1;

        int curr = s.top();
        s.pop();
        if(curr>mini) {
            return curr;
        } else {
            int prevMin = mini;
            int val = 2*mini-curr;
            mini = val;
            return prevMin;

        }
    }

    int top() {
        if(s.empty())
            return -1;
        
        int curr = s.top();
        if(curr<mini) {
            return mini;
        } else {
            return curr;
        }
    }

    int getMin() {
        if(s.empty())
            return -1;
        return mini;
    }  
};

int main() {
    SpecialStack s(5, 5);
    s.push(18);
    s.push(19);
    s.push(29);
    s.push(15);
    s.push(16);
    cout << s.getMin() << endl;
    s.pop();
    s.pop();
    cout << s.getMin() << endl;
    return 0;
}