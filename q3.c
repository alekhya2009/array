#include <stdio.h>

void bestBuySellDays(int prices[], int size) {
    int minPrice = prices[0], maxProfit = 0;
    int buyDay = 0, sellDay = 0;

    for (int i = 1; i < size; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
            buyDay = i;
        }
        if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
            sellDay = i;
        }
    }
    printf("Buy on day %d and sell on day %d\n", buyDay, sellDay);
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(prices[0]);
    bestBuySellDays(prices, size);
    return 0;
}
