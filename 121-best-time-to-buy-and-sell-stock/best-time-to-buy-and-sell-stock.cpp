class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int buy = prices[0];
        int profit = 0;
        int i=1;
        int n = prices.size();

        while(i<n)
        {
            profit = max(profit, prices[i]-buy);
            buy = min(buy, prices[i]);
            ++i;

        }
        return profit;
        
    }
};