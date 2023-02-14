class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (mp.count(nums[i]) && abs(mp[nums[i]] - i) <= k)
                return true;
            mp[nums[i]] = i;
        }
        return false;
    }
};