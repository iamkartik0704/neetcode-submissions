class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int n = prices.size();
        int profit = INT_MIN;
        for(int i=1;i<n;i++){
        //   profit = nums[i] - mini;
          profit = max(profit , prices[i] - mini);
          mini = min(prices[i] , mini);
        }
        return profit>0?(profit):(0);
    }
};
