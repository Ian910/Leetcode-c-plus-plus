class Solution {
public:
    bool isPalindrome(string s) {
        int i, j = 0, k;
        for (i = 0; i < s.size(); i++) {
            if ((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a'))
                s[j++] = tolower(s[i]);
            else if (s[i] <= '9' && s[i] >= '0')
                s[j++] = (s[i]);
        }

        for (i = 0, k = j - 1; i < j / 2, k >= j / 2; i++, k--) {
            if (s[i] != s[k])
                return false;
        }
        return true;
    }
};