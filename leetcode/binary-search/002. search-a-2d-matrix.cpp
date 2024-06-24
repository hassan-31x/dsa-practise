//? 1. First find the required row by binary search. Then search that row to find index using binary search.
//! TC: O(log(m) + log(n)) SC: O(1)
// https://leetcode.com/problems/search-a-2d-matrix/submissions/1298298168

//? 2. Use binary search normally but use a formula to convert mid in 1D to 2D.
//! TC: O(log(m*n)) SC: O(1)
// https://leetcode.com/problems/search-a-2d-matrix/submissions/1158996495

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int s = 0;
    int e = row*col-1;
    int mid = s + (e-s)/2;

    while(s<=e) {
        int element = matrix[mid/col][mid%col]; 

        if(element == target) {
            return 1;
        } else if (element > target) {
            e = mid-1;
        } else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}