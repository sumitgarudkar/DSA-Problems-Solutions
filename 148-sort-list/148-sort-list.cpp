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
    ListNode* sortList(ListNode* head) {
        vector<int> list;
        ListNode* temp=head;
        while(temp){
            list.push_back(temp->val);
            temp=temp->next;
        }
        sort(list.begin(),list.end());
        ListNode* n = new ListNode(0);
        ListNode* tmp =n;
        for(int x:list){
            n->next=new ListNode(x);
            n=n->next;
        }
        return tmp->next;
    }
};