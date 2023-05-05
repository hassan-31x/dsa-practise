//PATTERMS
#include<iostream>
using namespace std;

int main() {

    //Pattern Question 3 (Print column number wuth input times row and column)
    /*
    int n;
    cin>> n;

    int row = 1;
    while (row <= n) {
        int column = 1;

        while (column <= n) {
            cout<< column << " "; // cout<< n-j+1 (will print column number in reverse order)
            column = column + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 4 (Print counting in input number of rows and columns)
    /*
    int n;
    cin>> n;

    int row = 1;
    int num =1;

    while (row <= n) {
        int column = 1;

        while (column <= n) {
            cout<< num << " "; 
            column = column + 1;
            num = num + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 5 (Print * with row number of stars in each row until input number - triangle)
    /*
    int n;
    cin>> n;

    int row = 1;

    while (row <= n) {
        int column = 1;

        while (column <= row) {
            cout<< "*"; 
            column = column + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 6 (same as above but print row number instead of * - triangle)
    /*
    int n;
    cin>> n;

    int row = 1;

    while (row <= n) {
        int column = 1;

        while (column <= row) {
            cout<< row; 
            column = column + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 7 (same as above but print numbers starting with 1 - triangle)
    /*
    int n;
    cin>> n;

    int row = 1;
    int num = 1;

    while (row <= n) {
        int column = 1;

        while (column <= row) {
            cout<< num << " "; 
            column = column + 1;
            num = num + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 8 (same as above but row starting with row number - triangle)
    /*
    int n;
    cin>> n;

    int row = 1;

    while (row <= n) {
        int num = row;
        int column = 1;

        while (column <= row) {
            cout<< num << " "; 
            column = column + 1;
            num = num + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */
  
}
