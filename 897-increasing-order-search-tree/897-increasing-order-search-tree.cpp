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
    TreeNode* head;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        head->right = new TreeNode(root->val);
        head = head->right;
        inorder(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* res = new TreeNode(0);
        head = res;
        inorder(root);
        return res->right;
    }
};