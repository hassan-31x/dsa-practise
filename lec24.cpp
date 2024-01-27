//? MATHEMATICS FOR DSA (Algorithms)
#include<iostream>
using namespace std;

//TODO: Segmented Sieve
//TODO: Pegionhole Principle
//TODO: Catalon Number
//TODO: Incl. Excl. Principle

// 'Sieve Of Eratosthenes' algorithm for Prime Number
//* TC: O(n*log(log(n)))
int countPrimes(int n) {
    int count = 0; //count to store prime numbers
    
    vector<bool> prime(n+1, true); //array/vector to keep track of prime & non-prime numbers
    int prime[n+1];
    for(int j=0; j<=n+1; j++) {
        prime[j] = true;
    }

    prime[0] = prime[1] = false;

    for(int i=2; i<n; i++) { //loop will run for every element to check if its prime number

        if (prime[i]) { //second loop will only run for those that are true
            count++;

            //all the multiples of that number will turn to false so this loop runs for fewer elements. loop starts from 2*i means the first multiple of that nummber, and runs for every multiple (for 3, it starts from 6)
            for(int j=2*i; j<n; j=j+i) { 
                prime[j] = false;
            }
        }
    }
    return count;
}


// gcd(a, b) = gcd(a-b, b)
//* https://www.codingninjas.com/studio/library/gcd-euclidean-algorithm
// lcm(a, b) * gcd(a, b) = a*b
int gcd(int a, int b) {

    if (a==0) 
        return b;

    if (b==0) 
        return a;

    while(a != b) {
        if (a>b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}


//! How to give answer in modulo form: https://codeforces.com/blog/entry/72527


int exponent(int x, int n) { // T.C: O(n)
    int ans = x;

    if (n == 0)
        return 1;

    for(int i=1; i<n; i++) {
        ans = ans * x;
    }
    return ans;
}

//Modulo Arithmetics
//* T.C: O(log(n))
int fastExponent(int x, int n) {  //raise x to power n
    int ans = 1;

    while(n>0) {
        if (n&1) { //if power is odd
            ans = ans * x;
        }
        x = x * x;
        n = n>>1; //divided by 2 using bit shift
    }
    return ans;
}

int main() {

    // cout << countPrimes(40) <<endl;
    // cout<< gcd(24, 72) <<endl;
    cout<< exponent(4, 3) <<endl;
    cout<< fastExponent(4, 3) <<endl;
}