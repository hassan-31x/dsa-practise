//? Queues Practise Questions
#include<iostream>
#include<stack>
#include<queue>
#include<deque>
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

class kQueue() {
    public:
        int n;
        int k;
        int *arr;
        int *next;
        int *front;
        int *rear;
        int freeSpot;

    public:
        kQueue(int n; int k) {
            this -> n = n;
            this -> k = k;
            freeSpot = 0;

            arr = new int[n];
            next = new int[n];
            for(int i=0; i<n; i++) {
                arr[i] = 0;
                next[i] = i+1;
            }
            next[n-1] = -1;

            front = new int[k];
            rear = new int[k];

            for(int i=0; i<k; i++) {
                front[i] = rear[i] = -1;
            }
        }

        void enqueue(int data, int qn) {
            //overflow
            if(freeSpot == -1) {
                cout<< "Queue is full"<< endl;
                return;
            }

            //find first free index
            int index = freeSpot;
            //update freespot
            freeSpot = next[i];


            //check if first element of queue
            if(front[qn-1] == -1) {
                front[qn-1] = i;
            } else {
                //link previous last element to new element
                next[rear[qn-1]] = i;
            }

            //update next
            next[index] = -1;
            //update reat
            rear[qn] = index;
            //push element
            arr[index] = data;
        }

        int dequeue(int qn) {
            //underflow
            if(front[qn-1] == -1) {
                cout<< "Queue is empty"<< endl;
                return -1;
            }

            //find index to pop
            int index = front[qn-1];

            //update front to next element
            front[qn-1] = next[index];

            //update free spot
            next[index] = freeSpot;
            freeSpot = index;

            return arr[index];
        }
}

//? Find sum of Maximum & Minimum element in all k sized window in an array
int kSizedWindowSum(int *arr, int n, int k) {
    deque<int> maxi(k);
    deque<int> mini(k);

    //insert the maximum & mimimum element in the first window. It will be stored in order in the queue (max in descending, min in ascending). Which element is at the front of the queue is the maximum/minimum element of the window. When window slides, we will remove the elements from the front of the queue which are not in the window anymore and reenter the new element in order.
    for(int i=0; i<k; i++) {
        while(!maxi.empty() && arr[i] >= arr[maxi.back()]) {
            maxi.pop_back();
        }
        while(!mini.empty() && arr[i] <= arr[mini.back()]) {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;    
    ans += arr[maxi.front()] + arr[mini.front()];

    for(int i=k; i<n; i++) {

        while(!maxi.empty() && maxi.front() <= i-k) {
            maxi.pop_front();
        }
        while(!mini.empty() && mini.front() <= i-k) {
            mini.pop_front();
        }

        while(!maxi.empty() && arr[i] >= arr[maxi.back()]) {
            maxi.pop_back();
        }
        while(!mini.empty() && arr[i] <= arr[mini.back()]) {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        ans += arr[maxi.front()] + arr[mini.front()];
    }
    return ans;

}

int main() {
    implementStackUsingQueue();
    implmentQueueUsingStack();

    int arr[7] = {2, 5, -1, 7, -3, -1, -2};    
    cout<< kSizedWindowSum(arr, 7, 4);

    return 0;
}