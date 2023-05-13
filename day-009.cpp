//ARRAYS
#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    } 
    cout<< endl;
}

int main() {
    int a[5] = {2, 5, 1, 9, 6};

    printArray(a, 5);
}
