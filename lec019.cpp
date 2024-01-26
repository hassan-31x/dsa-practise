//? C++ STL
#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>

#include<algorithm>
using namespace std;

int main() {
    /*
    //? basic array
    int arr[4] = {1,2,3,4};

    //? STL array
    array<int,4> arr = {1,2,3,4}; //array<datatype, size> name = {values}

    cout<< arr[0] <<endl;
    cout<< arr.at(0) <<endl; //same as arr[0]

    cout<< arr.size() <<endl; //same as sizeof(arr)/sizeof(arr[0])
    cout<< arr.empty() <<endl; //returns 0 if not empty, 1 if empty

    cout<< arr.front() <<endl; //first element
    cout<< arr.back() <<endl; //last element
    */

    /*
    //? Vector
    //vector is a dynamic size array. Whenever you add an element to a vector, it doubles its size and copies all the elements to the new array. This is why it is slow.
    vector<int> v;
    vector<int> d(5,1); //vector of size 5, populated with 1
    
    //print vector
    for(int i:a) {
        cout<< i <<" ";
    }

    v.push_back(1); //adds element to the end of vector
    v.push_back(2); //will double its capacity

    cout<< v.capacity() <<endl; //what is the total number of elements that can be stored in vector
    cout<< v.size() <<endl; //how many elements are present inside vector
    cout<< v[0] <<endl;
    cout<< v.at(0) <<endl;

    cout<< v.front() <<endl;
    cout<< v.back() <<endl;

    v.pop_back(); //removes last element from vector
    v.clear(); //removes all elements from vector. capacity remains same

    vector<int> copy(d); //copying vector d to vector copy
    */

    /*
    //? deque
    deque<int> d;
    d.push_back(1); //adds element to the end of deque
    d.push_front(2); //adds element to the front of deque

    cout<< d[0] <<endl;
    cout<< d.at(0) <<endl;
    cout<< d.size() <<endl;
    cout<< d.empty() <<endl;

    cout<< d.front() <<endl;
    cout<< d.back() <<endl;

    d.pop_back(); //removes last element from deque
    d.pop_front(); //removes first element from deque

    d.erase(d.begin(), d.begin()+2); //removes elements from start to end-1

    for(int i:d) {
        cout<< i <<" ";
    }
    */

    /*
    //? stack
    stack<string> s;

    s.push("apple"); //adds element to the top of stack
    s.push("mango");
    s.push("banana");

    cout<< s.top() <<endl; //returns top element of stack
    s.pop(); //removes top element of stack

    cout<< s.size() <<endl;

    cout<< s.empty() <<endl;
    */

    /*
    //? queue
    queue<string> q;

    q.push("apple"); //adds element to the end of queue
    q.push("mango");
    q.push("banana");

    cout<< q.front() <<endl; //returns first element of queue
    q.pop(); //removes first element of queue
    cout<< q.front() <<endl; 

    cout<< q.size() <<endl;
    cout<< q.empty() <<endl;
    */

    /*
    //? priority queue
    */

    /*
    //? set
    //set is a data structure that stores unique elements in sorted order. elements can not be modified 
    // unordered set is a data structure that stores unique elements in unsorted order. elements come out in random order, faster than set
    set<int> s;

    //* TC: O(logn)
    s.insert(5); //adds element to set
    s.insert(5); 
    s.insert(5); 
    s.insert(3);
    s.insert(3);
    s.insert(9);
    s.insert(0);
    s.insert(0);

    for(int i:s) {
        cout<< i <<" ";
    }

    s.erase(3); //removes element from set
    s.erase(s.begin());

    cout<< s.count(5) <<endl; //returns 1 if element is present in set, 0 if not
    */

    /*
    //? map
    //map is a data structure that stores unique elements with key value pairs in sorted order. elements can not be modified. IMplmented by red black tree
    // unordered map is a data structure that stores unique elements with key value pairs in unsorted order. Implemented by hash table. Complexity is O(1) for all operations
    map<int, string> m;

    //* TC: O(logn) for all
    m[1] = "apple"; //adds element to map
    m[13] = "banana";
    m[2] = "mango";

    m.insert({5, "kiwi"});

    cout<< m[2] <<endl; //returns value of key 2

    for(auto i:m) {
        cout<< i.first <<" "<< i.second <<endl; //i.first is key, i.second is value
    }

    cout<< m.count(2) <<endl; //returns 1 if key is present in map, 0 if not

    m.erase(2); //removes element from map
    */

    /*
    //? ALGORITHMS
    vector<int> v = {3,2,1,5,6,4};

    //? binary search
    cout<< binary_search(v.begin(), v.end(), 3) <<endl; //returns 1 if element is present in vector, 0 if not

    //?bounds
    cout<< lower_bound(v.begin(), v.end(), 3) - v.begin() <<endl; //returns index of first element >= 3
    cout<< upper_bound(v.begin(), v.end(), 3) - v.begin() <<endl; //returns index of first element > 3

    //? min/max/swap etc
    int a = 3;
    int b = 5;

    cout<< min(a,b) <<endl;
    cout<< max(a,b) <<endl;
    swap(a,b);

    //? reverse
    string s = "abc";
    reverse(v.begin(), v.end());
    reverse(s.begin(), s.end());

    //? rotate
    rotate(v.begin(), v.begin()+2, v.end()); //rotates vector by 2 elements

    //? sort
    //intro sort: quick sort + heap sort + insertion sort
    sort(v.begin(), v.end()); //sorts vector in ascending order. TC: O(nlogn)
    */    
}