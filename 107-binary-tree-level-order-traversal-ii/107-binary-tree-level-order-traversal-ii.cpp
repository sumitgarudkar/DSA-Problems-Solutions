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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> q;
        vector<vector<int>> res;
        vector<int> list;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* tmp = q.front();
            if(tmp==NULL){
                q.pop();
                res.push_back(list);
                list.clear();
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
        reverse(res.begin(),res.end());
        return res;
    }
};