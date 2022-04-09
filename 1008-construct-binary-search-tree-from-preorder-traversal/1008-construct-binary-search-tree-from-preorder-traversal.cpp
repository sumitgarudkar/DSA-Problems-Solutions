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
    TreeNode* addNode(TreeNode* root, int data){
        if(root==NULL){
            root=new TreeNode(data);
        }
        else if(data>root->val){
            root->right = addNode(root->right,data);
        }
        else if(data<=root->val){
            root->left = addNode(root->left,data);
        }
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        for(int i:preorder){
            root = addNode(root,i);
        }
        return root;
    }
};