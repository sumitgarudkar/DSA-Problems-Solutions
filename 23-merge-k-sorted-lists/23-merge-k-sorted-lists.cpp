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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
        else if(lists.size()==1){
            return lists[0];
        }
        else{
            ListNode* res = lists[0];
            for(auto i=1; i<lists.size(); i++){
                res=mergelists(res,lists[i]);
            }
            return res;
        }
    }
    
    ListNode* mergelists(ListNode* l1, ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        
        ListNode* head = NULL;
        if(l1->val <= l2->val){
            head = l1;
            head->next = mergelists(l1->next,l2);
        }
        else{
            head=l2;
            head->next = mergelists(l1,l2->next);
        }
        return head;
    }
};