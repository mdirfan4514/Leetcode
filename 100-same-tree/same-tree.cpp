class Solution {
public:
    bool check(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL) return true;
        if(p != NULL && q == NULL) return false;
        if(p == NULL && q != NULL) return false;
        if(p->val != q->val) return false;
        bool LST = check(p->left, q->left);
        if(LST != true) return false;
        bool RST = check(p->right, q->right);
        if(RST != true) return false;
        return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
    bool ans = check(p, q);
    if(ans == true) return true;
    else return false;
    }
};