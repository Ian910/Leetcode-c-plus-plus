class Solution {
public:
    int doProcess(TreeNode* root, int dir) {
        if (root == NULL) return 0;
        int left = doProcess(root->left, 0);
        int right = doProcess(root->right, 1);
        int sum = 0;
        if (root->left == NULL && root->right == NULL && dir == 0)
            sum += root->val;
        return sum + left + right;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return doProcess(root, 1);
    }
};