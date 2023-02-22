class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0, sizeS = s.size(), sizeT = t.size();
        if (sizeS == 0) return true;
        while (i < sizeT) {
            if (s[j] == t[i])
                j++;
            i++;
            if (j == sizeS) return true;
        }
        return false;
    }
};