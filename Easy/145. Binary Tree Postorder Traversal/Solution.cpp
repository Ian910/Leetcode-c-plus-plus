class Solution {
public:
    void  doProcess(TreeNode* root, vector<int>& ans) {
        if (root == NULL)return;
        doProcess(root->left, ans);
        doProcess(root->right, ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        doProcess(root, ans);
        return ans;
    }
};