class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        string str1 = to_string(x);
        for (int i = 0; i < str1.length(); i++) {
            if (str1[str1.length() - 1 - i] != str1[i])
                return false;
        }
        return true;
    }
};