class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minprice = prices[0];
        int maxprice = 0;
        for(int i = 1;i<n; i++){
            if(n == 1) return 0;
            minprice = min(minprice, prices[i]);
            maxprice = max(maxprice, prices[i] - minprice);
        }
          return maxprice;
    }
};