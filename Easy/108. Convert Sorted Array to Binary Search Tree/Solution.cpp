class Solution {
public:
    TreeNode* doProcess(vector<int>& nums, int min, int max) {
        if (min <= max) {
            int mid = (min + max) / 2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = doProcess(nums, min, mid - 1);
            root->right = doProcess(nums, mid + 1, max);
            return root;
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return doProcess(nums, 0, nums.size() - 1);
    }
};