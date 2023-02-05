class Solution {
public:
	bool isValid(string s) {
		stack<char> temp;
		if (s.length() % 2 == 1)
			return false;
		if (s.length() == 0)
			return true;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '{' || s[i] == '[')
				temp.push(char(s[i] + 2));
			else if (s[i] == '(')
				temp.push(char(s[i] + 1));
			else {
				if (temp.size() == 0 || temp.top() != s[i])
					return false;
				temp.pop();
			}
		}
		if (temp.size() == 0)
			return true;
		else
			return false;
	}
};