//? 1. Brute Force: check whole array for all numbers
//! TC: O(n^2) SC: O(1)
// https://leetcode.com/problems/two-sum/submissions/908973092

//? 2. Store all elements in a hashmap & check if target - element exists
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/two-sum/submissions/1277492191

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    unordered_map<int, int> mp; // { val: index }

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }
        mp.insert({nums[i], i});
    }
    return {};
}