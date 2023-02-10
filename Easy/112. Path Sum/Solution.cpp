class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return false;
        targetSum -= root->val;
        if (root->left == NULL && root->right == NULL && targetSum == 0) return true;
        bool lt = hasPathSum(root->left, targetSum);
        bool rt = hasPathSum(root->right, targetSum);
        return lt || rt;
    }
};