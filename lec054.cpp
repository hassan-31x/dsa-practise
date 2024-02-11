//? Stack
#include<iostream>
#include<stack>
using namespace std;

class Stack {
    //properties
    public:
        int *arr;
        int top;
        int size;

    //behaviours 
    //* T.C = O(1)
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int value) {
        if(top == size-1) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++top] = value;
        }
    }

    void pop() {
        if(top >= 0) {
            top--;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    int peak() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    bool isEmpty() {
        return top == -1;
    }
}

int main() {
    /*
    //? Implementing stack using STL
    stack<int> s;

    s.push(10);
    s.push(30);
    s.push(20);

    s.pop();

    cout << s.top() << endl;

    if(s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
    */

    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);

    st.pop();
    st.pop();

    cout << st.peak() << endl;

    if(st.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }


    return 0;
}