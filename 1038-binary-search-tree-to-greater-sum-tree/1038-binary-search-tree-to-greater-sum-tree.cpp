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
    void help(TreeNode* root, int &count){
        if(root==NULL) return;
        help(root->right, count);
        count+=root->val;
        root->val=count;
        help(root->left, count);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        int count=0;
        help(root,count);
        return root;
    }
};