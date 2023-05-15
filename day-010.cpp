#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    } 
    cout<< endl;
}

int test(int arr[], int size) {
    int ans = 0;

    for(int i=0; i<size+1; i++) {
        ans = ans^arr[i];
        cout<<ans << " ";
    }
    cout<< endl;
    for(int i=0; i<size+1; i++) {
        ans = ans^i;
        cout<<ans << " ";
    }
    cout<< endl;
    cout<< ans;
}

void swapAlternate(int arr[], int size) {
    for(int i=0, count=0; count<size/2; i+=2, count++) {
        swap(arr[i], arr[i+1]);
    }
}


int main() {
    int a[11] = {2, 5, 1, -9, 6, -2, 7, 0, 21, 98, 4};
    int b[7] = {6, 3, 1, 5, 4, 3, 2};
    test(b, 5);
    // swapAlternate(a, 11);

    // printArray(a, 11);

}
