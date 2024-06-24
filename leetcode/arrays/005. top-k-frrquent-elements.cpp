//? 1. Use hashmap to count the number of occurance. Sort the hashmap by value to get the top k frequent elements
//! TC: O(nlogn) SC: O(n)

//? 2. Use hashmap to count the number of occurance. Use priority queue to get the top k frequent elements
//! TC: O(klogn) [popping takes logn & we doing it for k times] SC: O(n)
// https://leetcode.com/problems/top-k-frequent-elements/submissions/1286448168

//? 3. Use hashmap to count the number of occurance. Use bucket sort to get the top k frequent elements
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/top-k-frequent-elements/submissions/1286448783

vector<int> topKFrequent(vector<int>& nums, int k) {
    // storing occurance of each number
    int n = nums.size();
    
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        m[nums[i]]++;
    }
    
    // store each number in the array with key no. of occurances
    vector<vector<int>> buckets(n + 1);
    for (auto it=m.begin(); it!=m.end(); it++) {
        buckets[it->second].push_back(it->first);
    }
    
    // loop back from the bucket to output k (most occuring) elements
    vector<int> ans;
    
    for (int i = n; i >= 0; i--) {
        if (ans.size() >= k) {
            break;
        }
        if (!buckets[i].empty()) {
            ans.insert(ans.end(), buckets[i].begin(), buckets[i].end());
        }
    }
    return ans;
}