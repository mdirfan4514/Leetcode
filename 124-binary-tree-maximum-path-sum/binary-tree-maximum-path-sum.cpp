class Solution {
public:
    int maxSum;
    int solve(TreeNode* root){
        if(root==NULL) return 0;
        int l = solve(root->left);
        int r = solve(root->right);
        int niche_hi_mil_gaya_ans = l + r + root->val;
        int koi_ek_side_max = max(l,r) + root->val;
        int root_hi_max = root->val;
        maxSum = max({maxSum, niche_hi_mil_gaya_ans, koi_ek_side_max, root_hi_max});
        return max(koi_ek_side_max, root_hi_max);
    }
    int maxPathSum(TreeNode* root) {  
        maxSum = INT_MIN;
        solve(root);
        return maxSum;
    }
};