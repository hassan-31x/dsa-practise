//? Recursion Practice
#include <iostream>
using namespace std;

void printFibonacci(int n) {
    if(n == 0 || n == 1) {
        cout << n << " ";
        return;
    }
    printFibonacci(n-1);
    printFibonacci(n-2);
}

int fibonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    int prev1 = fibonacci(n-1);
    int prev2 = fibonacci(n-2);
    return prev1 + prev2;
}

void sayDigits(int n) {
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(n==0) {
        return;
    }

    sayDigits(n/10);
    cout << arr[n%10] << " ";
}

int main() {
    int n;
    cin >> n;

    printFibonacci(n);
    cout << endl;

    cout << fibonacci(n) << endl;

    sayDigits(n);
}