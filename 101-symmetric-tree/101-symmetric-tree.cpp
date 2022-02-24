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

private:
    bool help(TreeNode*l,TreeNode*r){
        if(!l || !r) return l==r;
        else return(l->val==r->val && help(l->left,r->right) && help(l->right,r->left));
    }
    
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        else return help(root->left,root->right);
    }
};