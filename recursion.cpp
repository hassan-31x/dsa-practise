// RECURSION
#include<iostream>
using namespace std;


int factorial(int n) {
    if (n < 0) return -1;
    if (n == 0) return 1;

    int partialAns = factorial(n-1);
    return n * partialAns;
}


// Time Complexity = O(n)
// Space Complexity = O(n)
int sum(int n) { 
    if (n == 1) return n;

    int partialAns = sum(n-1);
    return n + partialAns;
}


// Time Complexity = O(2^n)
// Space Complexity = O(n)
int fibonacci(int n) { //this will not print the fibonacci series but will give the corresponding value of input position
    if (n <= 2) return 1;

    int partial1 = fibnacci(n-1);
    int partial2 = fibnacci(n-2);
    return partial1 + partial2;
}
void fibonacciSeries(int n, int a = 0, int b = 1) {
    if (n == 0) {
        return;
    }

    cout << a << " ";
    fibonacciSeries(n-1, b, a+b);
}



// Time Complexity = O(n)
// Space Complexity = O(n)
long long power(int x, int n) {

    if (n == 0) return 1;

    long long partialAns = power(x, n-1);
    return partialAns*x;
}


// Time Complexity = O(log n)
// Space Complexity = O(n)
long long powerFast(int x, int n) {

    if (n == 0) return 1;

    long long partialAns = powerFast(x, n/2);
    if (n%2==1) return partialAns*partialAns*x; //if power is odd, the power is reduced by 1 when n/2+n/2
    return partialAns*partialAns; // power(x, n/2) * power(x, n/2)
}




int palindrome() {
    //to be done later
}



void reverseArray(int arr[], int left, int right) {
    if (left >= right) return; //base condition

    swap(arr[left], arr[right]); //your work
    reverseArray(arr, left+1, right-1); //ask recursion to handle remaining part
}

int main() {

    cout<< factorial(5) <<endl;
    cout<< sum(100) <<endl;
    cout<< fibonacci(10) <<endl;
    // cout<< fibonacciSeries(10) <<endl;
    cout<< power(2, 2) <<endl;

    int arr[6] = {1, 2, 3, 4, 5, 6};
    reverseArray(arr, 0, 5); //give left any number-1 you want to reverse array after. Give 0 if want to reverse complete array
    for(int i=0; i<6; i++) {
        cout<< arr[i]<< " ";
    }

}