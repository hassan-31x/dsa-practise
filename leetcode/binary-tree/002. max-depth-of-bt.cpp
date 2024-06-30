//? 1. Use BFS to traverse tree & increment a variable count when a level changes
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/1300141415

def maxDepth(self, root: TreeNode) -> int:
    q = deque()
    level = 0

    if root:
        q.append(root)

    while q:
        for i in range(len(q)):
            node = q.popleft()

            if node.left:
                q.append(node.left)
                
            if node.right:
                q.append(node.right)

        level += 1

    return level
    

//? 2. Use DFS to count levels
//! TC: O(n) SC: O(n)
// https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/1300139223/

int maxDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}