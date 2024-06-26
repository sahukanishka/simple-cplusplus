# Functions 

Functions are constructs that take input, perform some operation, and return an output. For example, a mixer takes multiple ingredients (inputs), mixes them, and then returns a mixture (output). You can use functions as many times as needed, and they will perform the assigned task and return the output, just like a mixer.

### Why We Need Functions

Functions help you write your functionality once and then reuse it whenever and wherever you need. Suppose we are selling apples 🍎 and want to calculate the profit. Without functions, you would have to write the code to calculate profit every time. However, with a function, you create it once and then use it again and again.

### How to write function in c++

There is always a one function in c++ program that is called **main()** function. When we compile our code this function runs. Function can return or cannot return anything its depends use case. If we want to return integer from our function then the function will start form **int** and if we want to return nothing it will start from **void**.

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
### Parameter Passing to function

There are two ways we can pass parameter to function. 
1. Pass by value 
2. Pass by reference

#### Pass by value : 
When we pass the value to the function and the changes made in function not affect the actual value of the passed variable is called pass by value. If the value of the passed parameter is changed it only affect within the scope of that function only, they have no effect on the value of the argument in the calling function.

example :

```cpp
#include<iostream>

int sumOfTwo(int a , int b){
    a = a + b;
    std::cout << "Value of a,b in calling function a = " << a << " and b = " << b << std::endl;
    return a;
}

int main(){
    int a = 10;
    int b = 20;
    sumOfTwo(a,b);
    std::cout << "Value of a,b in main function a = " << a << " and b = " << b << std::endl;
}
```



#### Pass by reference : 
When we pass the reference of an argument in the calling function and the changes made by calling function can reflect the value of the parameter in the main function. i.e the calling function can modify the argument by using its reference.

```cpp
#include<iostream>

int swapNumber(int &a , int &b){
   int temp = 0;
   temp = a;
   a = b;
   b = temp;
   return a,b
}

int main(){
    int x = 11;
    int y = 12;
    std::cout<<"Before swap x,y = "<< x <<" , " << y <<  std::endl;
    swapNumber(x,y);
    std::cout<<"After swap x,y = "<< x <<" , " << y <<  std::endl;
}
```

The pass by reference is more efficient that pass by value because it does not copy the argument.

The primary use of functions is to prevent code duplication. However, it's important to strike a balance; creating functions for very small tasks can slow down the compilation speed. You can decide weather to use pass-by-value or pass-by-reference according to use case.
