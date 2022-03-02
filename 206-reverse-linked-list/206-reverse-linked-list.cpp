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
private:
    ListNode* help(ListNode* root, ListNode* prev){
        if(!root) return prev;
        ListNode* nxt = root->next;
        root->next=prev;
        return help(nxt,root);
    }
    
public:
    ListNode* reverseList(ListNode* head) {
        return help(head,NULL);
    }
};