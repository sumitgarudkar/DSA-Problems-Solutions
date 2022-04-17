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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> list;
        inorder(root,list);
        TreeNode* current = new TreeNode(0);
        TreeNode* res = current;
        for(int l:list){
            current->right = new TreeNode(l);
            current = current->right;
        }
        return res->right;
    }
    
    void inorder(TreeNode* root, vector<int> &list){
        if(root==NULL) return;
        inorder(root->left,list);
        list.push_back(root->val);
        inorder(root->right,list);
    }
};