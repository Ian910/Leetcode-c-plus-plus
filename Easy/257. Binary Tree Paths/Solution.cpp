class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == NULL)return {};
        vector<string>ans;
        string root_val = to_string(root->val);
        vector<string>left = binaryTreePaths(root->left);
        vector<string>right = binaryTreePaths(root->right);
        for (auto it : left)ans.push_back(root_val + "->" + it);
        for (auto it : right)ans.push_back(root_val + "->" + it);
        if (ans.size() == 0)return{ root_val };
        return ans;
    }
};