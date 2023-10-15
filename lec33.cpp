#include<iostream>
using namespace std;

bool isSorted(int arr[], int start, int size) { //comparing each element with all preceding elements, then calling itself to compare next element with its preceding

    if (start == size-1 || size == 0 || size == 1) { //base case
        return 1;
    }
    
    for(int i=start+1; i<size; i++) { //comparing each element with the start element (checking whether smaller or not) [UNNECESSARY]
        if (arr[start] > arr[i]) {
            return 0;
        }
    }

    bool sorted = isSorted(arr, start+1, size); //if every element is smaller than start, recall the function with next element to compary with others
    return sorted;
}
bool isSortedFaster(int arr[], int size) { //compare only adjacent elements and call itself for comparing next adjacent elements

    if (size == 0 || size == 1) {
        return 1;
    }

    if (arr[0] > arr[1])
        return 0;
    else {
        bool remaining = isSortedFaster(arr+1, size-1); //pass the array without its first element as it has already been compared
        return remaining;
    }
}


int arraySum(int arr[], int size, int sum) {
    if (size == 0)
        return sum;

    int remaining = arraySum(arr+1, size-1, sum+arr[0]);
    return remaining;
}
int arraySumAnother(int arr[], int size) {
    if (size == 0)
        return 0;

    if (size == 1)
        return arr[0];


    int remaining = arraySumAnother(arr+1, size-1);
    return arr[0] + remaining;
}


bool linearSearch(int arr[], int size, int item) {
    if (size == 0)
        return 0;

    if (arr[0] != item) {
        bool temp = linearSearch(arr+1, size-1, item);
        return temp;
    } else {
        return 1;
    }
}
int linearSearchIndex(int arr[], int index, int size, int item) { //to be completed later
    if (size == 0)
        return 0;

    if (arr[index] != item) {
        int temp = linearSearch(arr, index+1, size-1, item);
        return temp;
    } else {
        return index;
    }
}

int main() {
    int arr[7] = {2, 3, 4, 5, 7, 7, 8};
    cout<< isSorted(arr, 0, 7) <<endl;
    cout<< isSortedFaster(arr, 7) <<endl;
    cout<< arraySum(arr, 7, 0) <<endl;
    cout<< linearSearch(arr, 7, 6) <<endl;
}