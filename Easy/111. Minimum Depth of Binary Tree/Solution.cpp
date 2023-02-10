class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int lt = minDepth(root->left);
        int rt = minDepth(root->right);
        if (lt * rt == 0) return lt + rt + 1;
        return min(rt, lt) + 1;
    }
};