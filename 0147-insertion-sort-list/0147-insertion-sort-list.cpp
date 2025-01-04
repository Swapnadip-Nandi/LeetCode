/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dum = new ListNode(0);
        dum -> next = head;
        ListNode *pre = dum, *curr = head;
        while (curr) {
           if ((curr->next) && (curr->next->val < curr->val)) {
             while ((pre->next) && (pre->next->val < curr->next->val)) {
                    pre = pre -> next;
                }
                ListNode* temp = pre -> next;
                pre -> next = curr -> next;
                curr -> next = curr -> next -> next;
                pre -> next -> next = temp;
                pre = dum;
            }
            else {
                curr = curr -> next;
            }
        }
        return dum -> next;
    }
};