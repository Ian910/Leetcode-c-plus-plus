class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0 || strs[0].length() == 0)
            return "";
        int min = strs[0].length(), i, j;
        string str;
        for (i = 0; i < strs.size(); i++) {
            if (strs[i].length() == 0)
                return "";
            if (min > strs[i].length()) {
                min = strs[i].length();
            }
        }
        if (min == 0)
            return "";
        for (i = 0; i < min; i++) {
            j = 1;
            while (j < strs.size()) {
                if (strs[0][i] != strs[j][i])
                    return str;
                j++;
            }
            str += strs[0][i];
        }
        return str;
    }
};