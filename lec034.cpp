//? Recursion with Strings & Practise
#include <iostream>
using namespace std;

string reverseString(string str) {
    if(str.length() == 0) {
        return "";
    }
    string remaining = reverseString(str.substr(1));
    return remaining + str[0];
}
void reverseStringAnother(string& str, int s, int e) { //passing string by reference using & (ampersand)
    if(s>e) {
        return;
    }
    swap(str[s], str[e]);
    reverseStringAnother(str, ++s, --e);
}

bool checkPalindrome(string str, int s, int e) {
    if(s>e) {
        return 1;
    }
    if(str[s] != str[e]) {
        return 0;
    }
    return checkPalindrome(str, ++s, --e);
}

int calculatePower(int n, int p) { //* T.C: O(n)
    if(p==0) {
        return 1;
    }
    int prevPower = calculatePower(n, p-1);
    return n * prevPower;
}
int calculatePowerFaster(int n, int p) { //* T.C: O(logn)
    if(p==0) {
        return 1;
    }
    if(p==1) {
        return n;
    }

    int prevPower = calculatePowerFaster(n, p/2);

    if(p%2 == 0) { //if even
        return prevPower * prevPower;
    }
    return n * prevPower * prevPower;
}

void bubbleSort(int arr[], int size) {
    if(size<=1) {
        return;
    }
    for(int i=0; i<size-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort(arr, size-1);
}

int main() {
    string str;
    cin >> str;

    cout << reverseString(str) << endl;

    reverseStringAnother(str, 0, str.length()-1);
    cout << str << endl;

    cout << checkPalindrome(str, 0, str.length()-1) << endl;

    int n, p;
    cin >> n >> p;
    cout << calculatePower(n, p) << endl;
    cout << calculatePowerFaster(n, p) << endl;
}