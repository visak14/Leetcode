class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, minprice = prices[0], n = prices.size(), profit = 0;
        while(i<n){
            if (prices[i] < minprice){
                minprice = prices[i];
            }
            else {
                profit = max(profit, prices[i]-minprice);
            }
            i++;
        }
        return profit;
    }
};