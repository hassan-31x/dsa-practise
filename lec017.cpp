//? Bubble Sort
//* TC: O(n^2) (both best & worst case)
#include<iostram>
using namespace std;

void print(vector<int> v) {
    for(int i=0; i<v.size(); i++) {
        cout<< v[i] <<" ";
    }
    cout<< endl;
}

void bubbleSort(vector<int>& arr, int n) {   
    for(int i=0; i<n-1; i++) {

        bool swapped = false; //flag to exit if array is already sorted

        for(int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

void bubbleSortAnother(vector<int>& arr, int n) {   
    for(int i=1; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {5,4,3,2,1};
    vector<int> arr2 = {3,4,2,5,2,1,};
    int n = arr.size();

    bubbleSort(arr, n);
    bubbleSortAnother(arr2, n);

    print(arr)
    print(arr2)

    return 0;
}