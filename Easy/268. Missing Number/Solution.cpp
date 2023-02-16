class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size(), ans = 0, i = 0;
        for (i; i < size; i++)
            ans = ans ^ i ^ nums[i];
        return ans ^ i;
    }
};