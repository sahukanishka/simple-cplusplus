# Functions 

Functions are constructs that take input, perform some operation, and return an output. For example, a mixer takes multiple ingredients (inputs), mixes them, and then returns a mixture (output). You can use functions as many times as needed, and they will perform the assigned task and return the output, just like a mixer.

### Why We Need Functions

Functions help you write your functionality once and then reuse it whenever and wherever you need. Suppose we are selling apples 🍎 and want to calculate the profit. Without functions, you would have to write the code to calculate profit every time. However, with a function, you create it once and then use it again and again.

### How to write function in c++

There is always a one function in c++ program that is called **main** function. When we compile our code this function runs. Function can return or cannot return anything its depends use case. If we want to return integer from our function then the function will start form **int** and if we want to return nothing it will start from **void**.

The main function in c++ is special function and by default its return 0 so we don't have to explicitly return anything from main.
Here's an example in C++:

```cpp
#include <iostream>

int main(){
    std::cout<<"Program executed"<<std::endl;
}
```

Create new function apart form main :

```cpp
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
```

In this example, we created a function called **calculateProfit** that takes two parameters as input and returns the total profit we have made. 

If we want to calculate daily profit, we can easily do it with functions:

```cpp
int main(){
    // Calculate and display profit for multiple days
    int result1 = calculateProfit(600, 1000);
    std::cout << "Day 1 profit is: " << result1 << std::endl;

    int result2 = calculateProfit(400, 700);
    std::cout << "Day 2 profit is: " << result2 << std::endl;

    int result3 = calculateProfit(500, 400);
    std::cout << "Day 3 profit is: " << result3 << std::endl;

    return 0;
}
```

The primary use of functions is to prevent code duplication. However, it's important to strike a balance; creating functions for very small tasks can slow down the compilation speed.

