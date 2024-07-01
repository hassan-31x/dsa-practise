# https://leetcode.com/problems/reverse-linked-list/submissions/1301060473

def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
    prev, curr = None, head

    while curr:
        temp = curr.next
        
        # reverse the connection of curr node by connecting it to prev node
        curr.next = prev

        # move the pointers to reverse next node
        prev = curr
        curr = temp # as curr.next is now changed

    return prev