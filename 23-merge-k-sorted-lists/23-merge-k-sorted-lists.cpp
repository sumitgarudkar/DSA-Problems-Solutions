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
        int n=lists.size();
        if(n==0) return NULL;
        if(n==1) return lists[0];
        
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<n; i++){
            ListNode* temp = lists[i];
            while(temp!=NULL){
                pq.push(temp->val);
                temp=temp->next;
            }
        }
        ListNode* tmp = new ListNode(0);
        ListNode* head = tmp;
        while(!pq.empty()){
            tmp->next = new ListNode(pq.top());
            pq.pop();
            tmp=tmp->next;
        }
        return head->next;
    }
};