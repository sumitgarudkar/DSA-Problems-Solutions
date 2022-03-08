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
    bool hasCycle(ListNode *head) {
        set<ListNode*> st;
        ListNode* temp = head;
        while(temp!=NULL){
            if(st.count(temp)) return 1;
            st.insert(temp);
            temp=temp->next;
        }
        return 0;
    }
};
