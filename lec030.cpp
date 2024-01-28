//? Macros, Global Variables, Inline Functions, 
#include <iostream>
using namespace std;

#define PI 3.14 //does not take memory & unchanable

int i = 5; //global variable, can be accessed everywhere. Bad practice as it can be changed anywhere

void a() {
    cout << i << endl;
    i++;
}

void b() {
    cout << i << endl;
}

//inline function: used to reduce the overhead of function call.
//compiler replaces the function call with the function body if the function is inline & has 1 line of code. If 2/3 lines, then it is upto compiler. Reduces overhead of function call.
inline int getMax(int a, int b) {
    //ternary operator
    return (a>b) ? a : b;
}

//default arguments
void print(int arr[], int n, int start = 0) { //default arguments should be at the end
    for(int i=start; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int r = 5
    int area = PI * r * r;
    cout << area << endl; 

    
    int a = 5, b = 6;
    int ans = getMax(a, b);

    int arr[] = {1, 2, 3, 4, 5};
    print(arr, 5);
}