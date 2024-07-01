# https://leetcode.com/problems/merge-two-sorted-lists/submissions/1301086512

def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
    node = ListNode()
    head = node # to keep track of head node as node is getting changed later on. head is a reference variable. Also ussed for edge case

    # we are assigning to node.next not node because directly assigning to node will reference to list1, not the actual value is changed so the link is broke: https://chatgpt.com/share/8d78741f-ad69-4d33-bb0a-736548041e07
    while list1 and list2:
        if list1.val < list2.val:
            node.next = list1
            list1 = list1.next
        else:
            node.next = list2
            list2 = list2.next
        node = node.next

    # If either list is not empty, append it to the result
    if list1:
        node.next = list1
    elif list2:
        node.next = list2

    # kept a dummy node at start & returning next node for edge case if both lists are empty
    return head.next