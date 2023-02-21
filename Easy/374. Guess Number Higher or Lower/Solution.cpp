class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        long int min = 1, max = num, mid, temp;
        while (min <= max) {
            mid = min + (max - min) / 2;
            temp = mid * mid;
            if (temp == num) return true;
            else if (temp > num) max = mid - 1;
            else min = mid + 1;
        }
        return false;
    }
};