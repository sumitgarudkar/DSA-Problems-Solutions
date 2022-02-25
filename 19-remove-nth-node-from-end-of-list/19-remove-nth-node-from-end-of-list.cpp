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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *low = head, *high = head;
        for(int i=0; i<n; i++){
            high = high->next;
        }
        if(high==NULL){
            ListNode* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return head;
        }
        while(high->next!=NULL){
            high = high->next;
            low = low->next;
        }
        ListNode* temp = low->next;
        low->next = temp->next;
        delete temp;
        return head;
    }
};