class Solution {
public:
    string addBinary(string a, string b) {
        if (a.length() > b.length())
            return process(a, b);
        else
            return process(b, a);
    }
    string process(string max, string min) {
        int check = 0;
        for (int i = 0; i < max.length(); i++) {
            if (check != 0 || i < min.length()) {
                check += max[max.length() - 1 - i] - 48;
                if (i < min.length())
                    check += min[min.length() - i - 1] - 48;
                max[max.length() - 1 - i] = char(48 + check % 2);
                check /= 2;
            }
        }
        if (check > 0) {
            max.insert(0, to_string(check % 2));
            check /= 2;
        }
        return max;
    }
};