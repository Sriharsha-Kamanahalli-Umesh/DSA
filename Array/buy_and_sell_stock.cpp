/*given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing 
a different day in the future to sell that stock. Return the maximum profit you can achieve 
from this transaction. If you cannot achieve any profit, return 0.*/

#include <iostream>
#include <vector>

using namespace std;

int maxProfit(std::vector<int>& prices) {
        int max_profit=0;
        int min_price=INT_MAX;
        for(int i=0;i <prices.size(); i++){
            if(prices[i]<min_price)
                min_price=prices[i];
            int max_val = prices[i]-min_price;
            if(max_val > max_profit)
                max_profit = max_val;
        }
        return max_profit;
    }