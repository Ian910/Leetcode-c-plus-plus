class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;
        long long int beg = 0, end = x, mid;
        while (0 < end) {
            mid = beg + (end - beg) / 2;
            if (mid * mid <= x && x < (mid + 1) * (mid + 1)) {
                return mid;
            }
            else if (x >= mid * mid) {
                beg = mid + 1;
            }
            else if (x <= mid * mid) {
                end = mid - 1;
            }
        }
        return x;
    }
};