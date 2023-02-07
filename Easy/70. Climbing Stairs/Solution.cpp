class Solution {
public:
    int climbStairs(int n, long long int pre_1 = 1, long long int pre_2 = 1) {
        while (n--) {
            pre_2 = (pre_1 += pre_2) - pre_2;
        }
        return pre_2;
    }
};