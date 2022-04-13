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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next) return NULL;
        ListNode *prev=NULL, *fast=head, *slow=head;
        while(fast && fast->next){
            prev = slow;
            fast=fast->next->next;
            slow = slow->next;
        }
        prev->next = prev->next->next;
        return head;
    }
};