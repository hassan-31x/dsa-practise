// https://www.lintcode.com/problem/659/

//? Encodes a list of strings to a single string.
//! TC: O(n) SC: O(n)
string encode(vector<string>& strs) {
    string result = "";
    
    // we did not just take the # or any other special character as delimiter because it can be part of the string itself. We didnot just use the size of the string as delimiter because the size of the string can be more than 1 digit. So, we used the size of the string followed by # as delimiter
    for (int i = 0; i < strs.size(); i++) {
        string str = strs[i];
        result += to_string(str.size()) + "#" + str;
    }
    
    return result;
}

//? Decodes a single string to a list of strings.
//! TC: O(n) SC: O(n)
vector<string> decode(string s) {
    vector<string> result;
    
    int i = 0;
    while (i < s.size()) {
        int j = i;
        while (s[j] != '#') {
            j++;
        }
        int length = stoi(s.substr(i, j - i));
        string str = s.substr(j + 1, length);
        result.push_back(str);
        i = j + 1 + length;
    }
    
    return result;
}