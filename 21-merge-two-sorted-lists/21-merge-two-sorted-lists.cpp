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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p =l1, *q=l2;
        ListNode* newhead = new ListNode(0);
        ListNode* current = newhead;
        while(p||q){
            int x=(p)? p->val : INT_MAX;
            int y=(q)? q->val : INT_MAX;
            if(x<=y){
                ListNode* temp = new ListNode(x);
                current->next = temp;
                current = temp;
                p=p->next;
            }
            else{
                ListNode* temp = new ListNode(y);
                current->next=temp;
                current=temp;
                q=q->next;
            } 
        }
        return newhead->next;
    }
};