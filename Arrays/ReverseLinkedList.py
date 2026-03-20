class ListNode:
    def __init__(self, val=0):
        self.val = val
        self.next = None
def reverseList(head):
    prev = None
    current = head
    while current:
        nxt = current.next
        current.next = prev
        prev = current
        current = nxt
    return prev
