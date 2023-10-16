//SWITCH & FUNCTIONS
#include<iostream>
using namespace std;

//Function
int power(int a, int b) {
    int ans = 1;

    for(int i=1; i<=b; i++) {
        ans *= a;
    }

    return ans;
}

//Function to tell if number is even or not
bool isEven(int a) {
    if(a&1) { //odd cuz last digit in binary is 1
        return 0;
    }
    return 1;
}

//Factorial Function
int factorial(int n) {
    int ans=1;

    // while (n>1) {
    //     ans *= n;
    //     n -= 1;
    // }
    for(int i=1; i<=n; i++) {
        ans = ans * i;
    }

    return ans;
}

//Void
void printCounting(int n) { //using void as it doesn't return anything
    for(int i=1; i<=n; i++) {
        cout<< i << " ";
    }
}
//we can also return nothing in void, just use the 'return;' keyword to end the function

//Prime Number Function 
bool isPrime(int n) {
    for(int i=2; i<n; i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

//functions by default are byval not byref

int main() {

    /*
    //Switch Statements
    int num = 2;
    
    cout<< endl;
    switch( num ) {
        case 1: cout<< "First" <<endl;
            break;
        case 2: cout<< "Second" <<endl;
            break;
        default: cout<< "It is default case" <<endl;
    }
    */

    //Calculator Program
    /*
    int a, b;
    char op;

    cout<< " Enter the value of a " <<endl;
    cin >> a;

    cout<< " Enter the value of b " <<endl;
    cin >> b;

    cout<< " Enter the operator you want to perform " <<endl;
    cin >> op;


    switch( op ) {
        case '+': cout<< a+b <<endl;
            break;
        case '-': cout<< a-b <<endl;
            break;
        case '*': cout<< a*b <<endl;
            break;
        case '/': cout<< a/b <<endl;
            break;
        default: cout<< "Please enter a valid operation" <<endl;
    }
    */


    // Function Calling
    /*
    int a, b;
    cin>> a >> b;

    int answer = power(a, b);
    cout<< "Answer is: " << answer <<endl;
    */

    //nCr using Factorial Function
    /*
    int n, r;
    cout<< " Enter value of n & r for calculating nCr " <<endl;
    cin>> n >> r;


    int nFac = factorial(n);
    int rFac = factorial(r) * factorial(n-r);

    int ans = nFac / rFac;
    cout<< ans <<endl;
    */

    // printCounting(20);

    //Function receives varialnle by value (if we change a parameter, it does not change it outside)
}