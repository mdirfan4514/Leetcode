class Solution {
public:
    int mxDepth(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(mxDepth(root->left), mxDepth(root->right));
    }
    int maxDepth(TreeNode* root) {
        return mxDepth(root);
    }
};