//? 1. Brute Force: Sort all strings and check if they are equal
//! TC: O(n * mlogm) SC: O(n)

//?  2. Store all strings in a hashmap with key as the count of each letter in the string
// https://leetcode.com/problems/group-anagrams/submissions/1286444603

string getKey(string str) {
    // count of each letter in the string saved in array
    vector<int> count(26);
    for (int i=0; i<str.size(); i++) {
        count[str[i] - 'a']++;
    }
    
    // as array can not be key of hashmap, convert it to string
    string key = "";
    for (int i = 0; i < count.size(); i++) {
        key.append(to_string(count[i]) + '#');
    }
    return key;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // use a hashmap to group together all words with same number of exact letters. key would be the count of each letter in the word
    unordered_map<string, vector<string>> m;
    for (int i=0; i<strs.size(); i++) {
        string key = getKey(strs[i]);
        m[key].push_back(strs[i]);
    }

    // push all values of hashmap to answer
    vector<vector<string>> ans;
    for (auto it=m.begin(); it!=m.end(); it++) {
        ans.push_back(it->second);
    }
    return ans;
}
