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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* node1=head;
        ListNode* temp=head;
        ListNode* node2=head;
        
        for(int i=1; i<k; i++){
            node1=node1->next;
            temp=temp->next;
        }
        while(temp->next!=NULL){
            temp=temp->next;
            node2=node2->next;
        }
        int tmp=node1->val;
        node1->val = node2->val;
        node2->val = tmp;
        return head;
    }
};