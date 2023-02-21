class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int sizeR = ransomNote.size(), sizeM = magazine.size();
        if (sizeR > sizeM) return false;
        int letter[26] = { 0 };
        for (char c : magazine)
            letter[c - 'a']++;
        for (char c : ransomNote)
            if (letter[c - 'a']-- <= 0) return false;
        return true;
    }
};