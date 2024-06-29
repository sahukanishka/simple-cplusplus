# Loops 

Loops are nothing bt iterating a chuck of code again and again. When we have to perform some operation again and again until some condition hit we use loops. There are ,multiple types of loops are available.

1. For loop
2. While loop
3. Do while loop

Example write a program to print hello world 5 times

 ### Without loop 
```cpp

#include <iostream>

int main(){
    std::cout<<"Hello World"<<std::endl;
    std::cout<<"Hello World"<<std::endl;
    std::cout<<"Hello World"<<std::endl;
    std::cout<<"Hello World"<<std::endl;
    std::cout<<"Hello World"<<std::endl;
}
```

### With loop 

## For loop 

This method is one of the most useful to iterate of program. Below is the structure to write it - 
```
for (initialization expr; test expr; update expr)
{    
     // Code that we want to execute
}
```
In this initialization is the first step. In this we can initialize variables and they executed at once and the scope is limited to loop itself. Second step is the exit condition, on every iteration it check weather a condition is satisfied or not if yes then it continues the loop if no it exited the loop. The third updated expression executed after our body of the loop executed. 

```cpp

#include <iostream>

int main(){
    for(int i = 0;i<5;i++){
        std::cout<<"Hello World with for loop"<<std::endl;
    }
}
```

## While loop 

Name itself telling that in this loop we have condition inside the while statement, if repeats itself if the condition is satisfied. In this we have to initialize and write the updated logic according to use case. Below is the structure to write for loop. 

```
initialization expression;
while (test_expression)
{
   // statements
 
  update_expression;
}

```

```cpp

#include <iostream>

int main(){
    int j = 0;
    while(j < 5){
         std::cout<<"Hello World with while loop"<<std::endl;
         j++;
    }
}
```


## Do while loop

Its same like while loop but in do while loop first code is executed then if checks the condition. If condition satisfied it continues the loop if not it exited the loop (  Condition is tested by end of the loop body). In do while loop it runs at least once irrespective of the test condition.

```
initialization expression;
do
{
   // statements
   update_expression;
} while (test_expression);
```

```cpp

#include <iostream>

int main(){
    int k = 0;
    do {
        std::cout<<"Hello World with do while loop"<<std::endl;
        k++;
    }while(k < 5);
}
```




