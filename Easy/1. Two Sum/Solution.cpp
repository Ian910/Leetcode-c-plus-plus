class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        ans.resize(2);
        unordered_map<int, int> data_case;
        for (int i = 0; i < nums.size(); i++) {
            if (data_case.find(nums[i]) != data_case.end()) {
                ans[0] = data_case[nums[i]];
                ans[1] = i;
                return ans;
            }
            data_case[target - nums[i]] = i;
        }
        return ans;
    }
};