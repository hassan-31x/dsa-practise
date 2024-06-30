//? 1. Use BFS to traverse tree & increment a variable count when a level changes
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/1300141415

//? 2. Use DFS to count levels
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/1300139223/

int maxDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}