class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;                       // walker

        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                ListNode* dup = curr->next;          // the duplicate node
                curr->next = curr->next->next;       // skip over it
                delete dup;                          // free its memory (optional on LeetCode)
            } else {
                curr = curr->next;                   // no duplicate, move forward
            }
        }
        return head;                                 // head never changes
    }
};