//? Keep track of height to verify balanced at a stage & also check if childs are balanced using boolean
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/balanced-binary-tree/submissions/1300180341

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root).first;
    }

private:
    pair<bool, int> dfs(TreeNode* root) {
        pair<bool, int> ans;
        if (root == NULL) {
            ans.first = true;
            ans.second = 0;
            return ans;
        }
        
        pair<bool, int> left = dfs(root->left);
        pair<bool, int> right = dfs(root->right);
    
        ans.second = 1 + max(left.second, right.second);

        if (!left.first || !right.first || abs(left.second - right.second) > 1) {
            ans.first = false;
        } else {
            ans.first = true;
        }
        
        return ans;
    }
};