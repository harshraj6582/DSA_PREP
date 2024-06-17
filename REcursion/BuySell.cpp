#include <iostream>
#include <vector>
using namespace std;

// Recursive function to calculate maximum profit
int maxProfitRecursive(vector<int>& stocks, int i, int cp, int profit) {
    int size = stocks.size();
    
    // Base case: No more stocks left to process
    if (i >= size) {
        return profit;
    }
    
    // Update the minimum buying price if current price is lower
    if (stocks[i] < cp) {
        cp = stocks[i];
    }
    
    // Calculate potential profit if selling at current price
    int currentProfit = stocks[i] - cp;
    
    // Update profit if current profit is higher
    if (currentProfit > profit) {
        profit = currentProfit;
    }
    
    // Recursively calculate max profit from next index
    return maxProfitRecursive(stocks, i + 1, cp, profit);
}

int main() {
    vector<int> stocks = {9, 2, 3, 4, 6, 7, 9};
    
    // Initial values for recursion: index 0, current price stocks[0], profit 0
    int maxProfit = maxProfitRecursive(stocks, 0, stocks[0], 0);
    
    cout << "Maximum profit: " << maxProfit << endl;
    
    return 0;
}
