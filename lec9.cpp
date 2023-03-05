//ARRAYS
#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    } 
    cout<< endl;
}

void reverse(int arr[], int size) {

    // arrays have garbage random value if we don't initialise it, if we initialise with some values, only those values will be assigned, rest will be 0/false

    /*int temp;
    for(int i=0; i<size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }*/

    /*int start = 0;
    int end = size-1;
    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }*/
}

int main() {
    int a[5] = {2, 5, 1, 9, 6};
    reverse(a, 5);

    printArray(a, 5);
}