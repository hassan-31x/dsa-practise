// POINTERS
#include<iostream>
using namespace std;

int main() {
    
    int num = 5;
    int *ptr = &num;

    /*
    //with pointer, 'num' & '*ptr' is same variable (points to same momory location)
    //pointer must be of same type of element
    //always initialise pointer with some value

    char letter = 'c';
    char *p = &letter;

    int *ptr2;
    int x = 4;
    ptr2 = &x;

    cout<< " Address of num is: " << &num <<endl; 
    cout<< " Address of num is: " << ptr <<endl; 
    cout<< " Size of pointer is: " << sizeof(ptr) <<endl;
    */


    /*
    //variable can be changed with pointer but using * before is mandatory, otherwise address will change to next byte after the consumed number of bytes
    //pointer can be copied also

    (*ptr)++;
    cout<< num <<endl;

    int *q = ptr;
    cout<< *q <<endl;
    */

}