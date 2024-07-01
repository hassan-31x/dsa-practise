# https://leetcode.com/problems/copy-list-with-random-pointer/submissions/1302420887

def copyRandomList(self, head: Optional[Node]) -> Optional[Node]:
    oldToCopy = {None: None} #None added as key for edge case

    # create all the new nodes mapped with already nodes to map to be added later
    cur = head
    while cur:
        copy = Node(cur.val)
        oldToCopy[cur] = copy
        cur = cur.next

    cur = head
    while cur:
        copy = oldToCopy[cur]
        copy.next = oldToCopy[cur.next] #next could be added before but added now due to ease
        copy.random = oldToCopy[cur.random]
        cur = cur.next
        
    return oldToCopy[head]