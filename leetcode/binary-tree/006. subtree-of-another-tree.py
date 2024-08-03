
#? Use sameTree helper function to check if the current node is the same as the subtree node
#! TC: O(n * m) & SC: O(n)
# https://leetcode.com/problems/subtree-of-another-tree/submissions/1303121594

class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not subRoot:
            return True
        if not root:
            return False

        if subRoot.val == root.val:
            if self.sameTree(subRoot, root):
                return True

        return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)

    def sameTree(self, s, t):
        if not s and not t:
            return True

        if not s or not t or s.val != t.val:
            return False
        
        return self.sameTree(s.left, t.left) and self.sameTree(s.right, t.right)