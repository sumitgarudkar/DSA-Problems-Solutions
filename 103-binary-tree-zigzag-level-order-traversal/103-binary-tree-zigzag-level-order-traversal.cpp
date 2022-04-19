/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> q;
        vector<int> list;
        vector<vector<int>> res;
        q.push(root);
        q.push(NULL);
        bool flag = 1;
        while(!q.empty()){
            TreeNode* tmp = q.front();
            if(tmp==NULL){
                q.pop();
                if(!flag){
                    reverse(list.begin(),list.end());
                }
                res.push_back(list);
                list.clear();
                flag=!flag;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                q.pop();
                list.push_back(tmp->val);
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
        }
        
        return res;
    }
};