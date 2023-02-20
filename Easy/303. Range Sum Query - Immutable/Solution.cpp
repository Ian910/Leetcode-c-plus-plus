class NumArray {
public:
    vector<int> ans;
    NumArray(vector<int>& nums) {
        ans.resize(nums.size() + 1, 0);
        for (int i = 1; i <= nums.size(); i++) {
            ans[i] += ans[i - 1] + nums[i - 1];
        }
    }

    int sumRange(int left, int right) {
        return ans[right + 1] - ans[left];
    }
};