//? Playing with Pointers & Locations
#include<iostream>
using namespace std;


pointerAsParameter(int *p) {
    cout<< p <<endl; //prints address
    cout<< *p <<endl; //prints value in address

    p = p + 1; //by val
    *p = *p + 1; //by ref
}

int main() {

    int arr[10] = {2, 4, 9};

    /*
    cout<< " Address of first memory block of array is: " << arr <<endl;
    cout<< " Address of first memory block of array is: " << &arr[0] <<endl;
    cout<< " value can also be found out by * e.g: " << *arr <<endl;
    cout<< " value at 1st location " << *(arr+1) <<endl; // arr[i] = *(arr + i)
    */


    /*
    int i = 2;
    cout<< i[arr] <<endl; // i[arr] = *(i + arr)
    */


    /*
    int *ptr = &arr[0];
    
    cout<< sizeof(arr) <<endl;
    cout<< sizeof(ptr) <<endl;
    cout<< sizeof(*ptr) <<endl;
    */


    /*
    // Character Arrays
    int intArr[5] = {1, 2, 3, 4, 5};
    char chArr[6] = "abcde"; //character array (must contain one element lesser than declared as last element is null)

    cout<< intArr <<endl;
    cout<< chArr <<endl; //whole array is printed unlike intArray (where first element's address is printed)

    char *c = &chArr[0];
    cout<< c <<endl; //prints entire array
    cout<< *c <<endl; //prints first element (not its address)

    char temp = 'z';
    char *pp = &temp;
    cout<< pp <<endl; //keeps printing until it reaches a memory location with null element inside

    char *tempMemory = 'abcde'; //abcde is stored in temporary memory & its address is stored in variable (NOT RECOMMENDED)
    */



    int value = 5;
    int *p = &value;


    pointerAsParameter(p);

    // sizeof(array) return size of first element (8 if int)
}