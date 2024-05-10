/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
           if (head == NULL || head->next == NULL || k == 0) return head;

        int count = 1;
        ListNode *temp = head;
        while (temp->next) {
            count++;
            temp = temp->next;
        }
        k = k % count;

        if (k == 0) return head;

        ListNode *curr = head, *prev = NULL;
        for (int i = 0; i < count - k; i++) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;
        ListNode* tail = curr;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = head;
        head = curr;

        return head;
    }
    
};