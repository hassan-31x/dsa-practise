#include<iostream>
#include<math.h>
using namespace std;

int main() {

    /*
    //decimal to binary conversion
    int n;
    cin >> n;

    int ans = 0
    int i=0
    while (n!=0) {
        int bit = n&10; //we take out the last bit of the number

        ans = (bit + pow(10, i)) + ans;

        n = n >> 1; //right shift the number to get the next bit in next iteration
        i++;
    }

    cout << ans << endl;
    */

    //binary to decimal
    int n;
    cin >> n;

    int ans = 0;
    int i=0;
    while (n!=0) {
        int bit = n%10; //we treat the binary as string as 1101 will still have some other binary representation, so we take out the last digit of integer

        if (bit==1) {
            ans = pow(2, i) + ans;
        }

        n = n/10; //remove last digit of n as we are treating it as integer, not a binary number so we take %
        i++;
    }
    cout << ans << endl;
}