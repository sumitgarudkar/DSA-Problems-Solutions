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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        ListNode* temp=head;
        while(temp!=NULL){
            mp[temp->val]+=1;
            temp=temp->next;
        }
        ListNode* newhead = new ListNode(0);
        ListNode* temp1=newhead;
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second == 1){
                temp1->next = new ListNode(it->first);
                temp1=temp1->next;
            }
        }
        return newhead->next;
    }
};