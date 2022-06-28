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
    bool help(TreeNode* root, long long floor, long long ceiling){
        if(!root) return true;
        if(root->val <= floor || root->val >= ceiling) return false;
        return (help(root->left, floor, root->val) && help(root->right, root->val, ceiling));
    }
    
    bool isValidBST(TreeNode* root) {
        return help(root,LONG_LONG_MIN,LONG_LONG_MAX);
    }
};