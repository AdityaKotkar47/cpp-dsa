// from leetcode https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <iostream>

using namespace std;

int findProfit1(int *stockPrices, int len)
{
    int maxProfit = INT_MIN, currentProfit = 0;

    for (size_t sell = 1; sell < len; sell++)
    {
        for (size_t buy = 0; buy < sell; buy++)
        {
            currentProfit = stockPrices[sell] - stockPrices[buy];

            maxProfit = max(maxProfit, currentProfit);
        }
    }

    return maxProfit;
}

int findProfit2(int *stockPrices, int len)
{
    int maxProfit = 0, currentProfit;

    int bestBuyPrices[len];
    bestBuyPrices[0] = INT_MAX; // as it is not possible buy & sell on the same day

    // calculating best buying prices
    for (size_t buy = 0; buy < len; buy++)
    {
        bestBuyPrices[buy] = min(bestBuyPrices[buy - 1], stockPrices[buy - 1]);
    }

    // calculating profits based on best buying profits
    for (size_t sell = 0; sell < len; sell++)
    {
        currentProfit = stockPrices[sell] - bestBuyPrices[sell];
        maxProfit = max(currentProfit, maxProfit);
    }

    return maxProfit;
}

int main(int argc, char **argv)
{

    int stockPrices[] = {7, 1, 5, 3, 6, 4};
    int len = sizeof(stockPrices) / sizeof(int);

    // the day we sell stock can't be the same day or before the day we buy it
    // we will try to think that each day is a sell day
    // so we will need to consider the buy days as the previous indices
    // we will calculate profit for each day and compare it with maxProfit
    // similar to subarray max sum, our maxProfit will be the answer

    cout << findProfit1(stockPrices, len) << endl;

    // another approach could be to find the best buying price
    // for each day and then calculate the respective profits
    // for each day a/c to the best available buying price
    // then the maximum profit will be our answer

    cout << findProfit2(stockPrices, len) << endl;

    return 0;
}