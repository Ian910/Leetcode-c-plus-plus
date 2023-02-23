class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int ans = 0;
        for (auto c : s)
            ++mp[c];
        for (auto it : mp)
            ans += it.second & 1;
        return s.size() - ans + (ans > 0);
    }
};