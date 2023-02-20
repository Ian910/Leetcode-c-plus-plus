class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size(), slow = 0, fast = 0;
        while (slow < size && fast < size) {
            if (nums[fast] != 0)
                swap(nums[fast], nums[slow]);
            if (nums[slow] != 0)
                slow += 1;
            fast++;
        }
    }
};