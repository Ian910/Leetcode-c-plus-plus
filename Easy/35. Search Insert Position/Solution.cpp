class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums[0] > target || nums.size() == 0)
            return 0;
        int i = 0, j = nums.size() - 1, index;
        while (i <= j) {
            index = (i + j) / 2;
            if (nums[index] == target)
                return index;
            if (nums[index] >= target)
                j = index - 1;
            else
                i = index + 1;
        }
        return i;
    }
};