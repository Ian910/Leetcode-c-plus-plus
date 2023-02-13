class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> temp;
        while (n != 1) {
            int sum = 0, current = n;
            while (current) {
                int digit = current % 10;
                sum += (digit * digit);
                current /= 10;
            }
            if (temp.find(sum) != temp.end())
                return false;
            temp[sum]++;
            n = sum;
        }
        return true;
    }
};