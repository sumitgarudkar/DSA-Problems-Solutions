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
    ListNode *detectCycle(ListNode *head) {
        int idx=0;
        unordered_map<ListNode*,int> mp;
        ListNode* temp = head;
        while(temp!=NULL){
            if(mp.count(temp)) return temp;
            mp[temp]=idx++;
            temp=temp->next;
        }
        return NULL;
    }
};