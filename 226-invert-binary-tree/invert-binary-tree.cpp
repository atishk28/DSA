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
    TreeNode* f(TreeNode* node){
        if(node==NULL) return NULL;
        TreeNode* left=f(node->left);
        TreeNode* right=f(node->right);
        TreeNode* x=node->left;
        node->left=node->right;
        node->right=x;
        return node;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        f(root);
        return root;
    }
};