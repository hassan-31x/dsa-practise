//? Recursion
#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    int prevFact = factorial(n-1); 
    return n * prevFact;
}

int powerOfTwo(int n) {
    if(n == 0) {
        return 1;
    }
    int prevPower = powerOfTwo(n-1);
    return 2 * prevPower;
}

void printCounting(int n) {
    if(n == 0) {
        return;
    }
    printCounting(n-1); //head recursion (first call, then process)
    cout << n << " ";
}

void printCountingReverse(int n) {
    if(n == 0) {
        return;
    }
    cout << n << " ";
    printCountingReverse(n-1); //tail recursion (first process, then call)
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;

    cout << powerOfTwo(n) << endl;

    printCounting(n);
    cout << endl;
    printCountingReverse(n);
}