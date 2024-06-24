//? 1. Brute force approach is to use two loops to find the sum of all pairs and check if it is equal to the target.
//! TC: O(n^2) SC: O(1)

//? 2. If the sum is less than the target, we need to move the left pointer to the right since we want greater value & vice versa.
//! TC: O(n) SC: O(1)
// https://leetcode.com/problems/container-with-most-water/submissions/1286460425

int maxArea(vector<int>& height) {
    int i = 0;
    int j = height.size()-1;
    
    int curr = 0;
    int maxi = 0;
    
    while (i<j) {
        curr = (j-i) * min(height[i], height[j]);
        maxi = max(maxi, curr);
        
        if (height[i] <= height[j]) {
            i++;
        } else {
            j--;
        }
    }
    
    return maxi;
}