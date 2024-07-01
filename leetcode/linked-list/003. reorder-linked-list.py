# https://leetcode.com/problems/reorder-list/submissions/1302335379

def reorderList(self, head: ListNode) -> None:
    # find middle to reverse from there
    slow, fast = head, head.next
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

    # slow is now 1 node before 2nd half
    # reverse second half
    second = slow.next
    prev = slow.next = None #break link with first half, also to give NULL to last of 2nd half
    while second:
        tmp = second.next
        second.next = prev
        prev = second
        second = tmp

    # merge two halfs
    first, second = head, prev
    while second:
        tmp1, tmp2 = first.next, second.next #keep track of both nexts
        first.next = second
        second.next = tmp1
        first, second = tmp1, tmp2