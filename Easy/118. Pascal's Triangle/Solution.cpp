class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> generate(int numRows) {
        if (ans.size() < numRows) {
            ans.resize(numRows);
            /*vector<vector<int>> ans(numRows);*/
            for (int i = 0; i < numRows; i++) {
                ans[i].resize(i + 1);
                ans[i][0] = ans[i][i] = 1;
                for (int j = 1; j < i; j++) {
                    ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
                }
            }
        }
        vector<vector<int>> temp;
        temp.insert(temp.begin(), ans.begin(), ans.begin() + numRows);
        return temp;
    }
};