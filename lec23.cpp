// 2D ARRAYS
#include<climits> // for INT_MIN & INT_MAX
#include<iostream>
using namespace std;

// 2D arrays are for visualizing, in reality they are 1D array. Formula to find location in 1D array is ' col * i + j ', where col is total number of columns, i is row number, j is column number. This indexing is done in memory


void inputArray(int arr[][4], int row, int col) {
    /*
    // row wise input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin>> arr[i][j];
        }
    }

    // col wise input
    for(int j=0; j<col; j++) {
        for(int i=0; i<row; i++) {
            cin>> arr[i][j];
        }
    }
    */
}
void printArray(int arr[][4], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }
}



bool linearSearch(int arr[][4], int target, int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if (arr[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}


void rowWiseSum(int arr[][4], int row, int col) {
    int sum;

    for(int i=0; i<row; i++) {
        sum = 0;
        for(int j=0; j<col; j++) {
            sum += arr[i][j];
        }
        cout << "Sum for row number " << i+1 << " is: " << sum <<endl;
    }
}
void colWiseSum(int arr[][4], int row, int col) {
    int sum;

    for(int j=0; j<col; j++) {
        sum = 0;
        for(int i=0; i<row; i++) {
            sum += arr[i][j];
        }
        cout << "Sum for column number " << j+1 << " is: " << sum <<endl;
    }
}
void largestRowSum(int arr[][4], int row, int col) {
    int sum;
    int largest = INT_MIN;
    int rowIndex = -1;

    for(int i=0; i<row; i++) {
        sum = 0;
        for(int j=0; j<col; j++) {
            sum += arr[i][j];
        }
        if (sum > largest) {
            largest = sum;
            rowIndex = i;
        }
    }
    cout<< "Largest sum is " << largest << " for row number " << rowIndex+1 <<endl;
}

void colSizeWise(int arr[][4], int row, int col) { //print col in normal & reverse alternatively
    for(int j=0; j<col; j++) {
        if (j%2 != 1) {
            for(int i=0; i<row; i++) {
                cout<< arr[i][j] << " ";
            }
        } else {
            for(int i=row-1; i>=0; i--) {
                cout<< arr[i][j] << " ";
            }
        }
    }
}


void spiralMatrix(int arr[][4], int row, int col) {
    //They will reduce each time so every time loop is run for 1 less previous time
    int limitR = row-1;
    int limitC = col-1;

    //For keeping track of indexes of row and column
    int currentRow = 0;
    int currentCol = 0;

    // Last Row and Column for loop to stop
    int lastRow = row-2; //1
    int lastCol = col-2; //2

    int step = 1;

    while(currentCol!=lastCol || currentRow!=lastRow) {
        step += 1; //for telling if loop is running for odd mumber of times or even

        if (step%2 == 0) { //if even, first print row forwards then column downwards
            for(int j=currentCol; j<=limitC; j++) { //row forwards
                cout<< arr[currentRow][j] << " ";
                currentCol++;
            }
            currentRow++;
            currentCol--;
            for(int i=currentRow; i<=limitR; i++) { //column downwards
                cout<< arr[i][currentCol] << " ";
                currentRow++;
            }
                currentRow--;
            if (currentCol!=lastCol && currentRow!=lastRow) {
                currentCol--;
            }

            limitC -= 1;
            limitR -= 1;


        } else { //if not, print row backwards, then column upwards
            for(int j=limitC; j>=0; j--) { //row backwards
                cout<< arr[currentRow][j] << " ";
                currentCol--;
            }
            currentCol++;
            currentRow--;
            for(int i=currentRow; i>=limitR; i--) { //column upwards
                cout<< arr[i][currentCol] << " ";
                currentRow--;
            }
            currentRow++;
            currentCol++;

        }

    }
}


int main() {

    int arr0[3][3] = {1,2,3,4,5,6,7,8,9}; // array with 3 row & 3 col
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
    int arr4[4][4] = {1, 2, 4, 5, 3, 6, 8, 10, 11, 12, 13, 15, 16, 14, 9, 7};


    // inputArray(arr0, 3, 4);
    // printArray(arr, 3, 4);

    // cout<< " Enter the element to search " <<endl;
    // int target;
    // cin>> target;

    // if(linearSearch(arr, target, 3, 4)) {
    //     cout<< "FOUND" <<endl;
    // } else {
    //     cout<< "NOT FOUND" <<endl;
    // }

    // rowWiseSum(arr, 3, 4);
    // colWiseSum(arr, 3, 4);
    // largestRowSum(arr, 3, 4);
    // colSizeWise(arr4, 4, 4);
    // spiralMatrix(arr, 3, 4);
}