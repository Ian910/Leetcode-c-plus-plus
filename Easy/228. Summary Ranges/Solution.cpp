class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int size = nums.size();
        vector<string> ans;
        if (size == 0) return ans;
        long long int ft = nums[0], pre = nums[0];
        for (int i = 1; i < size; i++)
            if (pre + 1 == nums[i])
                pre = nums[i];
            else
                ft == pre ? ans.push_back(to_string(pre)) : ans.push_back(to_string(ft) + "->" + to_string(pre)), ft = pre = nums[i];
        ft == pre ? ans.push_back(to_string(ft)) : ans.push_back(to_string(ft) + "->" + to_string(pre));
        return ans;
    }
};