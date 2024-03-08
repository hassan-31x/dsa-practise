#include<vector>
#include<iostream>
#include<algorithm>
#include<typeinfo>
using namespace std;

int celebrity(vector<vector<int> >& M, int n) 
    {
        vector<int> ans;
        for(int i=0; i<n; i++) {
            bool zero = true;
            for(int j=0; j<n; j++) {
                if (M[i][j] != 0) {
                    zero = false;
                    break;
                }
            }
            if (zero == true) {
                ans.push_back(i);
            }
        }
        for(int i=0; i<n; i++) {
            bool zero = true;
            for(int j=0; j<n; j++) {
                if (M[j][i] != 1 && i!=j) {
                    zero = false;
                    break;
                }
            }
            if (zero == true) {
                if (find(ans.begin(), ans.end(), 4) == ans.end()) {
                    return i;
                }
            }
        }
        // return ans.size() == 1 ? ans[0] : -1;
        return -1;
    }

int main() {
    vector<vector<int>> M = {{0, 0, 1, 0},
                              {0, 0, 1, 0},
                              {0, 0, 0, 0},
                              {0, 0, 1, 0}};
    int n = 4;
    cout << celebrity(M, n);
    return 0;
}