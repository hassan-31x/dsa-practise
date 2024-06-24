//? 1. Brute force approach is to use two loops to find the sum of all pairs and check if it is equal to the target.
//! TC: O(n^2) SC: O(1)

//? 2. If the sum is less than the target, we need to move the left pointer to the right since we want greater value & vice versa.
//! TC: O(n) SC: O(1)
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/1286459227

vector<int> twoSum(vector<int>& numbers, int target) {
    int i=0;
    int j=numbers.size()-1;

    while(i<j) {
        int sum = numbers[i] + numbers[j];

        if (sum<target) {
            i++;
        } else if (sum>target) {
            j--;
        } else {
            return {i+1, j+1};
        }
    }
    return {};
}