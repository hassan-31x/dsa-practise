//BINARY SEARCH & USE CASES
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int item) {
    int start = 0;
    int end = size-1;
    int mid;

    while (start<=end) {
        mid = start + (end-start)/2; //not using (start+end)/2 as if both values add upto something greater than max possible value for integer, it will result in error

        if (item == arr[mid]) {
            return mid;
        }
        if (item > arr[mid]) {
            start = mid+1;
        }
        if (item < arr[mid]) {
            end = mid-1;
        }
    }
    return -1;
}

int main() {
  
    // int index = binarySearch(odd, 5, 11);
  
}
