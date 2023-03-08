// DOUBLE POINTERS
#include<iostream>
using namespace std;


void update(int **ptr2) {

    ptr2 = ptr2 + 1; //won't work

    *ptr2 = *ptr2 + 1; //will work

    **ptr2 = **ptr2 + 1; //will work    

}


int main() {

    int n = 5;
    int *ptr = &n;

    int **ptr2 = &ptr; //this pointer holds the address of variable 'ptr'


    /*
    cout<< "printing ptr: " << ptr <<endl; //address of n
    cout<< "value of address in ptr (*ptr): " << *ptr <<endl; //value inside the address in p (value of n)
    cout<< "address of ptr: " << &ptr <<endl; //memory address of ptr itself

    cout<< "printing ptr2: " << ptr2 <<endl; //same as above
    cout<< "value of address in ptr2 (*ptr2): " << *ptr2 <<endl; //value inside the address(ptr) in ptr2 (address of n) [same as first one]

    // if we want to print n
    cout<< n <<endl;
    cout<< *ptr <<endl;
    cout<< **ptr2 <<endl; //print value in address of address { ptr2[address of ptr] => ptr[address of n] => n[value] } (adding more stars get to more depths)

    // if we  want to print contents of ptr / address of n
    cout<< &n <<endl;
    cout<< ptr <<endl;
    cout<< *ptr2 <<endl;
    */

}