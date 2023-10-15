//INPUTS & WHILE LOOP
#include<iostream>
using namespace std;

int main() {
    
    //Input
    /*
    int n;
    cin>> n;
    cout<< n <<endl;
    */

    //Conditional Statement
    /*
    int a;
    cin>> a;

    if (a>0) {
        cout<< "a is positive" <<endl;
    }
    else {
        cout<< "a is negative" <<endl;
    }
    */

    //While Loop
    /*
    int a,b;
    cout<< "Enter the value of a and b" <<endl;
    cin>> a >> b;
    cout<< "value of A and B is: " << a << " and "<< b <<endl;
    */

    /*
    int n;
    while (n <= 10) {
        cout << "value of n is: " << n;
        n = n+!
    }
    */

    //Prime Number Checker
    /*
    int num;
    cin>> num;

    if (num == 1) {
        cout<< "Prime Number" <<endl;
    }
    else{
        int start = 2;
        bool prime = true;
        while (start<num) {
            if (num%start == 0) {
                prime = 0;
            }
            start = start + 1;
        }
        
        if (prime) {
            cout<< "Prime Number" <<endl;
        }
        else {
            cout<< "Not Prime" <<endl;;
        }
    }
    */

    //Pattern Question (print * with same number of rows and columns)
    /*
    int n;
    cin>> n;

    int row = 0;
    while (row < n) {
        int column = 0;

        while (column < n) {
            cout<< "*";
            column = column + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 2 (print row numbers for input times row and columns)
    /*
    int n;
    cin>> n;

    int row = 1;
    while (row <= n) {
        int column = 1;

        while (column <= n) {
            cout<< row;
            column = column + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */
}
