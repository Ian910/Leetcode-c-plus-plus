class Solution {
public:
    int guessNumber(int n) {
        long int min = 1, max = n, mid;
        int temp;
        while (min <= max) {
            mid = min + (max - min) / 2;
            temp = guess(mid);
            if (temp == 0) return mid;
            else if (temp == 1) min = mid + 1;
            else max = mid - 1;
        }
        return 1;
    }
};