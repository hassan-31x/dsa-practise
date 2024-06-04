//? 1. Brute force (comparing every element with every other)
//! TC: O(n^2) SC: O(1)

//? 2. Using sorting & looping
//! TC: O(nlogn) SC: O(1)

//? 3. Using set
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/contains-duplicate/submissions/1277419827

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s; //inserts & searches in O(1)
    
    for (int i = 0; i < nums.size(); i++) {
        if (s.find(nums[i]) != s.end()) { //if it exists in the set
            return true;
        }
        s.insert(nums[i]);
    }
    
    return false;
}