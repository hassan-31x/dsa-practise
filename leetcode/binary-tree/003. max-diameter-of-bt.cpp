//? 1. Keep track of height of tree & use a global max variable to store the max diameter & change at any time to keep track of max
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/diameter-of-binary-tree/submissions/1300159312

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int result = 0;
        dfs(root, result);
        return result;
    }

private:
    int dfs(TreeNode* root, int& result) {
        if (root == NULL) {
            return 0;
        }
        
        int left = dfs(root->left, result);
        int right = dfs(root->right, result);
        
        result = max(result, left + right);
        return 1 + max(left, right);
    }
};