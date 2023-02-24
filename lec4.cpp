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

    //Pattern Question 9 (same as above but without num variable - triangle)
    /*
    int n;
    cin>> n;

    int row = 1;

    while (row <= n) {
        int column = 0;

        while (column < row) {
            cout<< row+column << " "; 
            column = column + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 10 (Print number in reverse starting from column number till 1 for input number of rows - triangle)
    /*
    int n;
    cin>> n;

    int row = 1;

    while (row <= n) {
        int column = row;

        while (column > 0) {
            cout<< column << " ";
            column = column - 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 11 (Print alphabets with next alphabet in each row for input number of rows and columns)
    /*
    int n;
    cin>> n;

    int row = 1;
    char alphabet = 65;

    while (row <= n) {
        int column = 1;

        while (column <= n) {
            cout<< alphabet << " "; 
            column = column + 1;
        }
        alphabet = alphabet + 1;
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 12 (same as above but calculate character each time)
    /*
    int n;
    cin>> n;

    int row = 1;

    while (row <= n) {
        int column = 1;

        while (column <= n) {
            char alphabet = 'A' + row - 1;
            cout<< alphabet; 
            column = column + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */
    
    //Pattern Question 12 (Print alphabets with next alphabet in each column starting with A for input number of rows and columns)
    /*
    int n;
    cin>> n;

    int row = 1;

    while (row <= n) {
        char alphabet = 65;
        int column = 1;

        while (column <= n) {
            cout<< alphabet << " "; 
            column = column + 1;
            alphabet = alphabet + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 13 (Print alphabets with with an increasing counting alphabet for input number of rows and columns)
    //Pattern Question 14 (same as above but row starting with row alphabet)

    //Pattern Question 15 (Print row number of alphabet with row number of columns - triangle)
    /*
    int n;
    cin>> n;

    int row = 1;
    char alphabet = 'A';

    while (row <= n) {
        int column = 1;

        while (column <= row) {
            cout<< alphabet << " "; 
            column = column + 1;
        }
        alphabet = alphabet + 1;
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 16 (Alphabets goes until input n with row number of columns for n rows - triangle)
    /*
    int n;
    cin>> n;

    int row = 1;

    while (row <= n) {
        int column = row;

        while (column > 0) {
            char character = 'A' + (n - column + 1) - 1;
            cout<< character << " ";
            column = column - 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

/*
    //Number of rows are same in both but in first it goes (0 - num) and in second it goes (num - 0) [forward and backward]
    while (row <= n) {
        int column = 1;

        while (column <= row) {
            column = column + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    while (row <= n) {
        int column = row;

        while (column > 0) {
            column = column - 1;
        }
        cout<<endl;
        row = row + 1;
    }
*/

    //Pattern Question 17
    /*
    int n;
    cin>> n;

    int row = 1;

    while (row <= n) {
        int column = 1;
        int space = n - row + 1;
        
        while (space > 1) { //OR while (space) { 
            cout<< " "; 
            space = space - 1;
        }
        while (column <= row) {
            cout<< "*"; 
            column = column + 1;
        }
        cout<<endl;

        row = row + 1;
    }
    */

    //Pattern Question 18 (same as above but inverted triangle - triangle)
    /*
    int n;
    cin>> n;

    int row = n;

    while (row >= 1) {
        int column = 1;

        while (column <= row) {
            cout<< "*"; 
            column = column + 1;
        }
        cout<<endl;

        row = row - 1;
    }
    */
    //same can be done by printing using formula (n-row + 1) without starting rows from end

    //Pattern Question 19 (combine question 17 and 18)
    /*
    int n;
    cin>> n;

    int row = n;

    while (row >= 1) {
        int column = 1;
        int space = n - row + 1;
        
        while (space > 1) { //OR while (space) { 
            cout<< " "; 
            space = space - 1;
        }
        while (column <= row) {
            cout<< "*"; 
            column = column + 1;
        }
        cout<<endl;

        row = row - 1;
    }
    */

    //Pattern Question 20 (same as above but replace star with row number in asc order)
    /*
    int n;
    cin>> n;

    int row = n;

    while (row >= 1) {
        int column = 1;
        int space = n - row + 1;
        
        while (space > 1) { //OR while (space) { 
            cout<< " "; 
            space = space - 1;
        }
        while (column <= row) {
            cout<< n-row + 1; 
            column = column + 1;
        }
        cout<<endl;

        row = row - 1;
    }
    */

    //Patter Question 21 (Fibonacci Tree - triangle)
    /*int n;
    cin>> n;

    int row = 1;
    while (row <= n) {

        //print spaces (first triangle)
        int space = n - row;
        while (space) {
            cout<< " ";
            space = space - 1;
        }

        //print increasing numbers (second triangle)
        int column = 1;
        while (column <= row) {
            cout<< column;
            column = column + 1;
        }

        //print decreasing numbers except first row (third triangle)
        int start = row - 1;
        while (start) {
            cout<< start;
            start = start - 1;
        }

        cout<<endl;
        row = row + 1;
    }
    */

    //Pattern Question 22
    /*
    int n;
    cin>> n;
    
    int row = 1;
    int stars = 0;
    while (row <= n) {

        //first triangle (decreasing numbers)
        int column = 1;
        while(column <= n-row+1) {
            cout<< (column++);
        }

        //second triangle (stars)
        int star = stars;
        while (star) {
            cout<< "*";
            star = star - 1;
        }
        stars = stars + 2;

        //third triangle
        column = n-row + 1;
        while (column) {
            cout<< (column--);
        }


        cout<<endl;
        row = row + 1;
    }
    */
}