//? 1. Create a prefix & suffix array. For each index i, prefix[i] stores the product of all elements to the left of i and suffix[i] stores the product of all elements to the right of i
//! TC: O(n) SC: O(n)

//? 2. Optimize the space by storing the product of all elements to the left of i in the prefix array itself
//! TC: O(n) SC: O(1)
// https://leetcode.com/problems/product-of-array-except-self/submissions/1286452025 

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    int prefix=1;
    for(int i=0; i<n; i++) {
        ans[i] *= prefix;
        prefix *= nums[i];
    }

    int suffix=1;
    while (n--) {
        ans[n] *= suffix;
        suffix *= nums[n];
    }

    return ans;
}