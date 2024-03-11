//? Queues Practise Questions
#include<iostrem>
#include<stack>
#include<queue>
using namespace std;

void implementStackUsingQueue() {
    queue<int> q1, q2;
    int size = 0;

    void push(int x) {
        q2.push(x);
        size++;
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop() {
        if(q1.empty()) {
            return;
        }
        q1.pop();
        size--;
    }

    int top() {
        if(q1.empty()) {
            return -1;
        }
        return q1.front();
    }

    int getSize() {
        return size;
    }
};

void implmentQueueUsingStack() {
    stack<int> s1, s2;
    int size = 0;

    void push(int x) {
        s1.push(x);
        size++;
    }

    void pop() {
        if(s1.empty()) {
            return;
        }
        while(s1.size() != 1) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.pop();
        size--;
        stack<int> temp = s1;
        s1 = s2;
        s2 = temp;
    }

    int front() {
        if(s1.empty()) {
            return -1;
        }
        while(s1.size() != 1) {
            s2.push(s1.top());
            s1.pop();
        }
        int ans = s1.top();
        s2.push(s1.top());
        s1.pop();
        stack<int> temp = s1;
        s1 = s2;
        s2 = temp;
        return ans;
    }

    int getSize() {
        return size;
    }
};

queue<int> interleaveTwoQueuesIntoOne(queue<int> q1, queue<int> q2) {
    while (!q2.empty() && !q1.empty()) {
        q1.push(q2.front());
        q2.pop();

        q1.push(q1.front());
        q1.pop();
    }
}

//? Interleave: [-1, 2, 3,- -4, 5, 6-] -> [1, 4, 2, 5, 3, 6]
queue<int> interleaveQueue(queue<int> q) {
    int n - q.size();
    queue<int> newQ;

    for(int i=0; i<n/2; i++) {
        newQ.push(q.front());
        q.pop();
    }

    while(!newQ.empty()) {
        q.push(newQ.front());
        newQ.pop();

        q.push(q.front());
        q.pop();
    }

    return q;
}

queue<int> interleaveQueueUsingStack(queue<int> q) {
    int n = q.size();
    stack<int> s;

    //push first half of the queue to stack
    for(int i=0; i<n/2; i++) {
        s.push(q.front());
        q.pop();
    }
    //push back the stack elements to queue
    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    //move the second half of queue to the back
    for(int i=0; i<n/2; i++) {
        q.push(q.front());
        q.pop();
    }
    //push the first half of the queue to stack again to reverse it back
    for(int i=0; i<n/2; i++) {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()) {
        //move an element from stack to queue (from first half)
        q.push(s.top());
        s.pop();
        //move an element from start of queue to the back of queue (from second half)
        q.push(q.front());
        q.pop();
    }
    return q;
}

int main() {
    implementStackUsingQueue();
    implmentQueueUsingStack();
    return 0;
}