class Solution {
public:
    vector<vector<int>> ans;
    vector<int> getRow(int rowIndex) {
        if (ans.size() < rowIndex + 1) {
            int temp = ans.size();
            ans.resize(rowIndex + 1);
            for (int i = temp; i <= rowIndex; i++) {
                ans[i].resize(i + 1);
                ans[i][0] = ans[i][i] = 1;
                for (int j = 1; j < i; j++) {
                    ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
                }
            }
        }
        return ans[rowIndex];
    }
};