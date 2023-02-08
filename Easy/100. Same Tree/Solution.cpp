class Solution {
public:
    bool checkProcess(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;
        else if (p != NULL && q != NULL && p->val == q->val)
            return ((checkProcess(p->left, q->left)) && (checkProcess(p->right, q->right)));
        else
            return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return checkProcess(p, q);
    }
};