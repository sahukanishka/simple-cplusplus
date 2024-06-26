#include <iostream>

// Function to calculate profit
int calculateProfit(int purchasedValue, int soldValue) {
    int profit = soldValue - purchasedValue;
    return profit; 
}


int sumOfTwo(int a , int b){
    a = a + b;
    std::cout<< "Sum of a + b =" << a << std::endl;
    std::cout << "Value of a,b in calling function a = " << a << " and b = " << b << std::endl;
    return a;
}

void swapNumber(int &a , int &b){
   int temp = 0;
   temp = a;
   a = b;
   b = temp;
}

int main(){
    // Calculate and display profit for a single transaction
    int result = calculateProfit(600, 1000);
    std::cout << "Profit is: " << result << std::endl;

    //Pass by value example
    int a = 10;
    int b = 20;
    sumOfTwo(a,b);
    std::cout << "Value of a,b in main function a = " << a << " and b = " << b << std::endl;

    int x = 11;
    int y = 12;
    std::cout<<"Before swap x,y = "<< x <<" , " << y <<  std::endl;
    swapNumber(x,y);
    std::cout<<"After swap x,y = "<< x <<" , " << y <<  std::endl;
    return 0;


}
