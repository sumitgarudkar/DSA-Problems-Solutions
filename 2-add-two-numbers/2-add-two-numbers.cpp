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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newhead = new ListNode(0);
        ListNode* p = l1; ListNode* q = l2;
        ListNode* temp = newhead;
        int sum=0, carry=0;
        while(p!=NULL || q!=NULL){
            int a = (!p)? 0:p->val;
            int b = (!q)? 0:q->val;
            int sum=carry+a+b;
            carry=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            if(p) p=p->next;
            if(q) q=q->next;
        }
        if(carry>0){
            temp->next=new ListNode(carry);
        }
        return newhead->next;
    }
};