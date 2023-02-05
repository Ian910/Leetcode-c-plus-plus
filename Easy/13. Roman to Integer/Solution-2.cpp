class Solution {
public:
    int romanToInt(string s) {
        int sum = 0, num_before = 0, temp;
        for (int i = 0; i < s.length(); i++) {
            if (num_before == 1 || num_before == 10 || num_before == 100)
                temp = num_before;
            else
                temp = 0;
            if (s[i] == 'I')
                num_before = 1;
            else if (s[i] == 'V')
                num_before = 5;
            else if (s[i] == 'X')
                num_before = 10;
            else if (s[i] == 'L')
                num_before = 50;
            else if (s[i] == 'C')
                num_before = 100;
            else if (s[i] == 'D')
                num_before = 500;
            else if (s[i] == 'M')
                num_before = 1000;
            if (temp != 0 && (num_before == temp * 5 || num_before == temp * 10))
                sum -= 2 * temp;
            sum += num_before;
        }
        return sum;
    }
};