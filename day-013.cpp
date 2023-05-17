#include<iostream>
using namespace std;

int findPivot(int arr[], int size) {
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while(s<e) { //loop breaks when s=e

        if (arr[mid] >= arr[0]) { //plot numbers on graoh to understand better
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; //OR mid OR e
}

//We can also use previosuly written findPivot function and call binarySearch with updated parameters based on which line number is lying (upper or lower)
int findInSortedRotatedArray(int arr[], int size, int item) {
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while(s<=e) { 

        if (arr[mid] == item) {
            return mid;
        }
        else if (item >= arr[0]) { //plot numbers on graph to understand better
            e = mid;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

double morePrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) { //will run till precision times (decimal places wanted)
        factor = factor/10; // 0.1 => 0.01 => 0.001

        //initially j is answer. 0.1 is added to j everytime, then 0.01, them 0.001 (factor). j is then stored in answer everytime j square is less than n until we find the lowest j.
        for(double j=ans; j*j<n; j=j+factor) { 
            ans = j;
        }
    }
    return ans;
}


int main() {

    int pivotArr[6] = {6, 7, 9, 1, 2, 3};

    // cout<< findPivot(pivotArr, 6);
    // cout<< findInSortedRotatedArray(pivotArr, 6, 8);

}
