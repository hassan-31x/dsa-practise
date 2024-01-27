//? Insertion Sort
//insertion sort is a sorting algorithm that sorts an array by shifting (not swapping) elements one by one to their correct position by comparing them with their previous adjacent elements & stopping when the element is smaller than the previous element
//* TC: O(n^2) (both best & worst case)
#include<iostream>
using namespace std;

void insertionSort(int n, vector<int> &arr) {
    for(int i=1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;

        for(; j>=0; j--) {
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            } else {
                break; //stop
            }
        }
        arr[j+1] = temp;
    }
}

int main() {
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();

    insertionSort(n, arr);

    for(int i=0; i<n; i++) {
        cout<< arr[i] <<" ";
    }
    cout<< endl;

    return 0;
}