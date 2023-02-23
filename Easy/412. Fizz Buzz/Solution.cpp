class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for (int i = 1, fizz = 0, buzz = 0; i <= n; i++) {
            fizz++;
            buzz++;
            if (fizz == 3 && buzz == 5) {
                ans.emplace_back("FizzBuzz");
                fizz = 0;
                buzz = 0;
            }
            else if (fizz == 3) {
                ans.emplace_back("Fizz");
                fizz = 0;
            }
            else if (buzz == 5) {
                ans.emplace_back("Buzz");
                buzz = 0;
            }
            else
                ans.emplace_back(to_string(i));
        }
        return ans;
    }
};