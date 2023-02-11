class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minCost = INT_MAX, ans = 0;
        for (int i = 0; i < prices.size(); i++) {
            minCost = min(minCost, prices[i]);
            ans = max(ans, prices[i] - minCost);
        }
        return ans;
    }
};