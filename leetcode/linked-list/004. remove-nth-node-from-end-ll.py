# https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/1302347249

def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
    # we can move the right till node.next is not null, but that can give error if linklist is empty. so we used a dummy node & initialised left to it to keep track of n-1th node to make chain
    
    dummy = ListNode(0, head)
    left = dummy
    right = head

    while n > 0:
        right = right.next
        n -= 1

    while right:
        left = left.next
        right = right.next

    # delete
    left.next = left.next.next
    return dummy.next