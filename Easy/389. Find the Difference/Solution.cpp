class Solution {
public:
    char findTheDifference(string s, string t) {
        int sizeT = t.size(), i = 0;
        for (i = 0; i < sizeT; i++)
            t[i + 1] += t[i] - s[i];
        return t[sizeT - 1];
    }
};