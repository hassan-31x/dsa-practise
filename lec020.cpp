#include<iostream>
using namespacce std;

vector<int> reverse(vector<int> v) {
    int s = 0, e = v.size()-1;

    while(s<=e) {
        swap(v[s], v[e]);

        s++;
        e--;
    }
    return v;
}

void print(vector<int> v) {
    for(int i=0; i<v.size(); i++) {
        cout<< v[i] <<" ";
    }
    cout<< endl;
}

int main() {
    vector<int> v= {12,7,3,12,4};

    vector<int> ans = reverse(v)
    cout<< "Printing reverse array: "
    print(ans);

    return 0;
}