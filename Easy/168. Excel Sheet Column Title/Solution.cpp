class Solution {
public:
    string convertToTitle(int columnNumber) {
        std::string str{};
        while (columnNumber > 0) {
            columnNumber -= 1;
            str.insert(str.begin(), columnNumber % 26 + 'A');
            columnNumber /= 26;
        }
        return str;
    }
};