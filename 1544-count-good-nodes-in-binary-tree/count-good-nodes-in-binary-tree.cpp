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
    int dfs(TreeNode* node, int mxm) {
        if(!node) return 0;
        int count=0;
        if(node->val>=mxm) count = 1;
        mxm=max(mxm,node->val);
        count+=dfs(node->left,mxm);
        count+=dfs(node->right,mxm);
        return count;
    }
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
};