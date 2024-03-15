#include<iostream>
#include<algorithm>
using namespace std;

int geometriProgression(int arr[], int n, int k) {
    sort(arr, arr+n);
    int ans = 0;

    for (int i=0; i<n-2; i++) {
        int j = i+1;
        int a = arr[i];
        int gp = 0;

        while(j<n && (arr[j] >= a*k || gp<2)) {
            // cout<< i << " "<< j << " "<< a*k << " "<< arr[j]  << " " << gp<< endl;
            if(a*k == arr[j++]) {
                // cout<< arr[j]<< " ";
                gp++;
                a *= k;
                // cout<< i << " " << j << " " << gp<< " " << a<< endl;
            }
        }
        if(gp>=2) {
            ans++;
        }

        // cout<< ans << endl;
    }
    return ans;
}

bool isCat(string s) {
    int n = s.length();
    

    return true;
}

int main() {
    int arr[] = {1, 1, 1};
    cout << geometriProgression(arr, 3, 1) << endl;

    return 0;
}