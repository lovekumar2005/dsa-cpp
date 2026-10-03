// Problem: Best Time to Buy and Sell Stock
// LeetCode: 121
// Difficulty: Easy
//
// Given an array of stock prices where prices[i] is the price
// of a given stock on the ith day, find the maximum profit
// possible by choosing one day to buy and one day to sell.
//
// You must buy before you sell.
//
// Example:
// Input:  prices = [7,1,5,3,6,4]
// Output: 5
//
// Explanation:
// Buy on day 2 at price 1 and sell on day 5 at price 6.
// Maximum profit = 6 - 1 = 5.
//
// Approach:
// Keep track of the minimum price seen so far.
// For each price, calculate the possible profit by selling
// on that day and update the maximum profit.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

            if (maxProfit < (prices[i] - minPrice)) {
                maxProfit = prices[i] - minPrice;
            }
        }

        return maxProfit;
    }
};

int main() {
    Solution solution;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = solution.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}