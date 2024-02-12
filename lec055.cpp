//? Stack Advanced
#include<iostream>
#include<stack>
using namespace std;

void reverseString(string str) {
    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        s.push(str[i]);
    }

    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
}

int main() {
    string str = "Hello";
    reverseString(str);
    return 0;
}

def selectionSort(matrix, col):
    n = len(matrix)
    for i in range(n):
        min_idx = i
        for j in range(i+1, n):
            if matrix[j][col] < matrix[min_idx][col]:
                min_idx = j
        temp = matrix[i]
        matrix[i] = matrix[min_idx]
        matrix[min_idx] = temp
    