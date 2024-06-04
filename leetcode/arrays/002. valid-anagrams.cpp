//? 1. Sort both strings & compare them
//! TC: O(nlogn) SC: O(1)
// https://leetcode.com/problems/valid-anagram/submissions/1277429286

//? 2. Store count of each character in a hashmap & compare them
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/valid-anagram/submissions/1277426577

bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;
    
    unordered_map<char,int> smap;
    unordered_map<char,int> tmap;
    
    for(int i = 0; i < s.size(); i++){
        smap[s[i]]++;
        tmap[t[i]]++;
    }
    
    for(int i = 0; i < smap.size(); i++){
        if(smap[i] != tmap[i]) return false;
    }
    return true;
}