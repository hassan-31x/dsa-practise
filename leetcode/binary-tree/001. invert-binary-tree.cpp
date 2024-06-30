//? 1. reverse the left and right child of the root node.
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/invert-binary-tree/submissions/1300130671

TreeNode* invertTree(TreeNode* root) {
    if (root==NULL) {
        return NULL;
    }

    swap(root->left, root->right);
    
    invertTree(root->left);
    invertTree(root->right);

    return root;
}