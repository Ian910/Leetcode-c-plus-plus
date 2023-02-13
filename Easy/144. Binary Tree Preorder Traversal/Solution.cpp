class Solution {
public:
    void  doProcess(TreeNode* root, vector<int>& ans) {
        if (root == NULL)return;
        ans.push_back(root->val);
        doProcess(root->left, ans);
        doProcess(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        doProcess(root, ans);
        return ans;
    }
};