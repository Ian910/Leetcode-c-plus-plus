class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int times = 31;
        while (times >= 0) {
            ans += (n % 2) << times--;
            n >>= 1;
        }
        return ans;
    }
};