class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s == "")
            return 0;
        int i = s.length() - 1, ct = 0;
        while (s[i] == ' ' && i >= 0)
            i--;
        for (i = i; i >= 0; i--) {
            if (s[i] == ' ')
                return ct;
            ct++;
        }
        return ct;
    }
};