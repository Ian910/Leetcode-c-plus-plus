class Solution {
public:
    int firstBadVersion(int n) {
        long int pre = 1, mid, ans;
        while (pre <= n) {
            mid = (pre + n) >> 1;
            if (isBadVersion(mid)) {
                ans = mid;
                n = mid - 1;
            }
            else
                pre = mid + 1;
        }
        return ans;
    }
};