#include <iostream>

// Function to calculate profit
int calculateProfit(int purchasedValue, int soldValue) {
    int profit = soldValue - purchasedValue;
    return profit; 
}

int main(){
    // Calculate and display profit for a single transaction
    int result = calculateProfit(600, 1000);
    std::cout << "Profit is: " << result << std::endl;

    return 0;
}