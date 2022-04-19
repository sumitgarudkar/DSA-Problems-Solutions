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
    int depthMax;
    int maxDepth(TreeNode* root){
        if(!root) return 0;
        return max(1+maxDepth(root->left),1+maxDepth(root->right));
    }
    
    int sum(TreeNode* root, int depth){
        if(root==NULL) return 0;
        if(depth==depthMax) return root->val;
        return sum(root->left, depth+1) +sum(root->right, depth+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        depthMax = maxDepth(root);
        return sum(root,1);   
    }
};