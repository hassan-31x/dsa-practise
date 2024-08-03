
#? Use recursion to compare the left and right subtrees of the given trees
#! TC: O(n) & SC: O(n)
# https://leetcode.com/problems/same-tree/submissions

def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
    if not p and not q:
        return True

    if not p or not q or p.val != q.val:
        return False

    return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)