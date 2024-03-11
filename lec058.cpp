//? Stack Question (implement N stacks in an Array)
#include<iostream>
using namespace std;

//? This appraoch uses an Array to store the index of first element of each stack. Uses another Array to store the index of next element in the stack. This is used as a linked list. If an element is already present in the array, it will save the address of the next free element in the stack. We can go to the First Element using Top Array and then traverse the linked list using Next Array by going to next element using indexes.

class NStack {
    int *arr; //array used as stack
    int *top; //array to store index of top element of each stack
    int *next; //array to store index of next element for corresponding element in the above array. This is used as a linked list. If an element is already present in the array, it will save the address of the next free element in the stack.

    int n, s;
    int freespot = 0; //index of the next free spot in the array

    public:
        NStack(int N, int S) {
            n = N;
            s = S;
            arr = new int[s];
            top = new int[n];
            next = new int[s];

            //top initialise
            for(int i=0; i<n; i++) {
                top[i] = -1;
            }

            //next initialise
            for(int i=0; i<s-1; i++) {
                next[i] = i + 1;
            }
            next[s-1] = -1; //last element of next array will be -1 as there is no next element

            freespot = 0;
        }

        bool push(int x, int m) {
            //check for overflow
            if(freespot == -1) {
                return false;
            }

            //find index
            int idx = freespot;
            //update freespot
            freespot = next[freespot];

            //insert element into array
            arr[idx] = x;

            //update next of the new element
            next[idx] = top[m-1];

            //update top
            top[m-1] = idx;

            return true;
        }

        int pop(int m) {
            //check for underflow
            if(top[m-1] == -1) {
                return -1;
            }

            //find index
            int idx = top[m-1];

            //update top
            top[m-1] = next[idx];

            //update next of the new element
            next[idx] = freespot;

            //update freespot
            freespot = idx;

            return arr[idx];
        }
}

int main() {

}