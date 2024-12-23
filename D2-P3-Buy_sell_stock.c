#include <stdio.h>

// Function to calculate maximum profit
int maxProfit(int* prices, int size) {
    int min_price = _INT_MAX_; // Initialize to the largest possible integer
    int max_profit = 0;

    for (int i = 0; i < size; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i]; // Update the minimum price
        } else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price; // Update the maximum profit
        }
    }

    return max_profit;
}

int main() {
    int n;
    printf("Enter the number of days: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter the stock prices: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int result = maxProfit(prices, n);
    printf("Maximum Profit: %d\n", result);

    return 0;
}
