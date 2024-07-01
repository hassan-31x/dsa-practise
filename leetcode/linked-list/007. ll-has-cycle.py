
#? 1. Use a hashset to store the visited nodes and check if the node is already visited. Different nodes with same value are different
#! TC: O(n) & SC: O(n)

#? 2. Use fast & slow pointers to see if they meet again
#! TC: O(n) & SC: O(1)
# https://leetcode.com/problems/linked-list-cycle/submissions/1305260899

def hasCycle(self, head: Optional[ListNode]) -> bool:
    # fast & slow pointers are guaranteed to meet in O(n). The max difference between them can be n. Everytime slow pointer moves 1 & fast moved by 2 so the difference between them reduces by 1. They will meet in max n times
    slow, fast = head, head

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            return True
            
    return False