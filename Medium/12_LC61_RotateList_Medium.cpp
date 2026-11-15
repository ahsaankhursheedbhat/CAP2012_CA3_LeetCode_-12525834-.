class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }

        ListNode* curr = head;
        int len = 1;

        while (curr->next != NULL) {
            curr = curr->next;
            len++;
        }

        k = k % len;

        if (k == 0) {
            return head;
        }

        curr->next = head;

        int steps = len - k;

        ListNode* newTail = head;

        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;

        newTail->next = NULL;

        return newHead;
    }
};