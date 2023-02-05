class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> data_case = { {'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D',500},{'M',1000} };
        int sum = data_case[s[0]];
        for (int i = 1; i < s.length(); i++) {
            if (data_case[s[i]] > data_case[s[i - 1]])
                sum += data_case[s[i]] - 2 * data_case[s[i - 1]];
            else
                sum += data_case[s[i]];
        }
        return sum;
    }
};