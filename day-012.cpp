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

int firstOccurance(int arr[], int size, int item) {
    int s = 0, e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e) {

        if (arr[mid] == item) {
            ans = mid;
            e = mid - 1; //narrowing down the search range until it is restrcited to the first occurance of item
        }
        else if (item > arr[mid]) {
            s = mid + 1;
        }
        else if (item < arr[mid]) {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOccurance(int arr[], int size, int item) {
    int s = 0, e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e) {

        if (arr[mid] == item) {
            ans = mid;
            s = mid + 1; //narrowing down the search range until it is restrcited to the first occurance of item
        }
        else if (item > arr[mid]) {
            s = mid + 1;
        }
        else if (item < arr[mid]) {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    int occurance[12] = {1, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 7};
  
    // int index = binarySearch(odd, 5, 11);
  
    // int first = firstOccurance(occurance, 12, 4);
    // int last = lastOccurance(occurance, 12, 4);
    // int totalOccurances = (last-first) + 1;
    
}
