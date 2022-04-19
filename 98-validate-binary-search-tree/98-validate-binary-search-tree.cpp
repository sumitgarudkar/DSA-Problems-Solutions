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
    bool check(TreeNode* root, long long sbsmaller, long long sbgreater){
        if(root==NULL) return 1;
        if(root->val >= sbsmaller || root->val <= sbgreater) return 0;
        
        return (check(root->left, root->val, sbgreater)&&check(root->right, sbsmaller, root->val));
    }
    
    bool isValidBST(TreeNode* root) {
        return check(root, LLONG_MAX, LLONG_MIN);
    }
};