class Solution {
public:
    string toHex(int num) {
        unsigned int temp = num;
        string str;
        char bitLetter[17] = "0123456789abcdef";
        do {
            str += bitLetter[temp % 16];
            temp /= 16;
        } while (temp);
        return { str.rbegin(), str.rend() };
    }
};