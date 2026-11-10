class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;     // node behind curr; new tail will point here
        ListNode* curr = head;        // node being processed

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;  // 1. save the forward link
            curr->next = prev;                // 2. flip the arrow backward
            prev = curr;                      // 3. move prev forward
            curr = nextNode;                  // 4. move curr forward
        }
        return prev;                  // prev is the new head
    }
};