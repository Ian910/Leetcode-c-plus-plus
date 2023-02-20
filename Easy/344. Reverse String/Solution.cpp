class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size() / 2;
        for (int i = 0; i < size; i++) {
            swap(s[i], s[size - i - 1]);
        }
    }
};