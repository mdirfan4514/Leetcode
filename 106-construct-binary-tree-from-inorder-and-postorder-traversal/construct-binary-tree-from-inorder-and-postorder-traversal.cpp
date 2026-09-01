class Solution {
public:
    TreeNode* build(vector<int>& in, int inlo, int inhi, vector<int>& post, int postlo, int posthi){
        if(postlo > posthi) return NULL;
        TreeNode* root = new TreeNode(post[posthi]);
        int i = inlo;
        while(i<=inhi){
            if(in[i]==post[posthi]) break;
            i++;
        }
        int leftCount = i - inlo;
        int rightCount = inhi - i;
        root->left = build(in, inlo, i-1, post, postlo, posthi-rightCount-1);
        root->right = build(in, i+1, inhi, post, posthi-rightCount, posthi-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n = in.size();
        return build(in, 0, n-1, post, 0, n-1);
    }
};