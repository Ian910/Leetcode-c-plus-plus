class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        digits[i] += 1;
        while (i >= 0 && digits[i] > 9) {
            digits[i] = 0;
            if (i == 0)
                digits.insert(digits.begin(), 1);
            else
                digits[i - 1]++;
            i--;
        }
        return digits;
    }
};