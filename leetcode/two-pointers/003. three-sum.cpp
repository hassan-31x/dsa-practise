//? 1. Brute force
//! TC: O(n^3) SC: O(1)

//? 2. Sort the array and use two pointers sorted for every number to find the sum of three numbers.
//! TC: O(n^2) SC: O(1)
// https://leetcode.com/problems/3sum/submissions/1286460425

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    
    int n = nums.size();
    if (n < 3) {
        return result;
    }
    
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < n - 2; i++) {
        // since array is sorted, if the first element is greater than 0, we won't find any number adding which will be 0
        if (nums[i] > 0) {
            break;
        }
        if (i > 0 && nums[i - 1] == nums[i]) {
            continue;
        }
        
        int j = i + 1;
        int k = n - 1;
        
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            
            if (sum < 0) {
                j++;
            } else if (sum > 0) {
                k--;
            } else {
                result.push_back({nums[i], nums[j], nums[k]});
                
                // skip duplicates
                while (j < k && nums[j] == nums[j + 1]) {
                    j++;
                }
                j++;
                
                while (j < k && nums[k - 1] == nums[k]) {
                    k--;
                }
                k--;
            }
        }
    }
    
    return result;
}