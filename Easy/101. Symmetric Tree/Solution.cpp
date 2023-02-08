class Solution {
public:
    bool checkProcess(TreeNode* lt, TreeNode* rt) {
        if (lt == NULL && rt == NULL) return true;
        if (lt == NULL || rt == NULL) return false;
        if (lt->val != rt->val) return false;
        return (checkProcess(rt->left, lt->right) && checkProcess(rt->right, lt->left));
    }
    bool isSymmetric(TreeNode* root) {
        return checkProcess(root->left, root->right);
    }
};