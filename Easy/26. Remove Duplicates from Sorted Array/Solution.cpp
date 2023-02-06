class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return nums.size();
        int i = 1, k = nums[0], ct = 1;
        while (i < nums.size()) {
            if (nums[i] != k) {
                k = nums[i];
                nums[ct++] = nums[i];
            }
            i++;
        }
        return ct;
    }
};