class Solution {
public:
    int getHeight(TreeNode* root) {
        if (root == NULL) return 0;
        int lt = getHeight(root->left);
        int rt = getHeight(root->right);
        if (rt == -1 || lt == -1 || abs(lt - rt) > 1) return -1;
        return max(rt, lt) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        if (getHeight(root) == -1) return false;
        return true;
    }
};