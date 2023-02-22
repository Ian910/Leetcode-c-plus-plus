class Solution {
public:
    int firstUniqChar(string s) {
        if (s.length() == 0)
            return -1;
        unordered_map<char, int> data_case;
        int i;
        for (i = 0; i < s.length(); i++)
            data_case[s[i]]++;
        for (i = 0; i < s.length(); i++)
            if (data_case[s[i]] == 1)
                return i;
        return -1;
    }
};