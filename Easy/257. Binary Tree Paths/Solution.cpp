class Solution {
public:
    bool isAnagram(string s, string t) {
        int size = s.size(), i;
        if (size != t.size()) return false;
        unordered_map<char, int> mp;
        for (i = 0; i < size; i++) {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for (auto it : mp)
            if (it.second != 0) return false;
        return true;
    }
};