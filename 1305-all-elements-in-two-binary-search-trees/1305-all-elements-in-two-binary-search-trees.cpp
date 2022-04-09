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
    void help(TreeNode* rt, vector<int> &res){
        if(rt==NULL) return;
        help(rt->left,res);
        res.push_back(rt->val);
        help(rt->right,res);
    }
    
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;    
        help(root1,res);
        help(root2,res);
        sort(res.begin(),res.end());
        return res;
    }
};