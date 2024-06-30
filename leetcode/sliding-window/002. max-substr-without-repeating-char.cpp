//? 1. Brute Force. Check for every possible substring
//! TC: O(n^3) SC: O(n)

//? 2. Sliding Window
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/1298339675

int lengthOfLongestSubstring(string s) {
    unordered_set<char> chars; // set used for better complexity as duplicates involved

    int maxSize = 0;
    int l=0, r=0;

    while (r < s.size()){
        while (chars.find(s[r]) != chars.end()) { // as long as new character is present in the set, shrink window from left
            chars.erase(s[l]);
            l++;
        }

        maxSize = max(maxSize, r - l + 1);
        chars.insert(s[r]);
        r++;
    }
    return maxSize;
}