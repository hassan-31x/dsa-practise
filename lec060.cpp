#include<queues>
#include<iostream>
using namespace std;

int main() {
    //create a queue
    queue<int> q;

    //insert elements
    q.push(10);
    q.push(20);
    q.push(30);
    
    cout<< "size of queue is: "<<  q.size() << endl;

    q.pop();
    q.pop();
    
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    if(q.empty()) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue is not empty" << endl;
    }
}