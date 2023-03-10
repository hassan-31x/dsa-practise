// STRINGS & CHARACTER ARRAYS
#include<iostream>
using namespace std;


int getLength(char name[]) { //do not need to pass size of array incase of character
    int sum = 0;
    for(int i=0; name[i]!=0; i++) {
        sum++;
    }
    return sum;
}


void reverseString(char name[], int size) {
    int start = 0;
    int end = size-1;

    while(start < end) {
        swap(name[start++], name[end--]);
    }
}




char toLowerCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        char temp = ch + 32; //OR char temp = ch - 'A' + 'a'
        return temp;
    }
}
bool checkPalindrome(char str[], int size) {
    int start = 0;
    int end = size-1;

    while(start<=end) {
        if (toLowerCase(str[start]) != toLowerCase(str[end])) return 0;
        start++;
        end--;
    }
    return 1;
}


int main() {

    /*
    //strings are character arrays
    char name[20]; //if there are spaces left in the array, the first empty element will get 'null' character (\0)

    cout<< " Enter name to enter: ";
    cin>> name; //'cin' stops taking current input on space, tab & enter key. For taking spaces also in input, we use 'cin.getline'
    cout<< name <<endl;
    */

    /*
    //if we add null value to any index, it will only print characters before null
    name[2] = '\0';
    cout<< name<< endl;
    */

    /*
    int length = getLength(name);
    cout<< length <<endl;

    reverseString(name, length);
    cout<< name <<endl;

    char name[40] = "\"AmanaplanacanalPanama\"";
    string names = "AmanaplanacanalPanama";
    int length = getLength(name);
    cout<< checkPalindrome(name, length) <<endl;
    cout<< isPalindrome(names) <<endl;
    */

    /*
    //Strings
    string str;
    str = "Hello World";
    cout<< str <<endl;
    int length = str.length();
    str.push_back('s'); //push_back can only push one character at a time
    cout<< str <<endl;
    str.pop_back();
    cout<< str <<endl;
    */

    /*
    char charArray[20] = "hello world";
    cout<< charArray <<endl;
    string str = "hello world";
    cout<< str <<endl;
    */
}