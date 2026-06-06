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
    int f(TreeNode* node,int& mxm){
        if(node==NULL) return 0;
        int lsum,rsum;
        lsum=max(0,f(node->left,mxm));
        rsum=max(0,f(node->right,mxm));
        mxm=max(mxm,lsum+rsum+node->val);
        return max(lsum,rsum)+node->val;
    }
    int maxPathSum(TreeNode* root) {
        int mxm=INT_MIN;
        f(root,mxm);
        return mxm;
    }
};