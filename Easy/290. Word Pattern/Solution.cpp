class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int i = 0, sizeS = s.size(), sizePattern = pattern.size();
        vector<string> ans;
        string strTemp = "";
        for (i = 0; i < sizeS; i++) {
            if (s[i] != ' ')
                strTemp += s[i];
            else {
                ans.push_back(strTemp);
                strTemp = "";
            }
        }
        ans.push_back(strTemp);
        sizeS = ans.size();
        if (sizeS != sizePattern) return false;
        unordered_map<string, char> mp;
        unordered_map<char, char> mp2;
        for (i = 0; i < sizePattern; i++) {
            mp2[pattern[i]] = 'a';
            if (mp.count(ans[i]) && mp[ans[i]] != pattern[i])
                return false;
            else
                mp[ans[i]] = pattern[i];
        }
        if (mp.size() != mp2.size()) return false;
        return true;
    }
};