/// stock buy and sell
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell = prices[0];
        int n = prices.size();
        int profit = 0;
        for(int i =1; i < n; i++){
            if(buy > prices[i])
                buy = prices[i];
                sell = prices[i];
            profit = max(profit,sell-buy);
        }
        return profit;
    }
};