# Conditions 
Conditions are one of the most interesting and important part of any programming language. Conditions are the backbone of any logic that we write. In c++ there are multiple way to write conditional statements. 

1. if statement
2. else if statement
3. else statement
4. Nested if, else if and else 
5. Switch statement
6. Conditional Operators
7. Jump Statement 
   1. break
   2. continue 
   3. go to 
   4. return 

### example of if,else if and else statement - 

```cpp
#include <iostream>

int main(){

    int friends = 3;

    if(friends == 0){
        std::cout<<"Make new friends"<<std::endl;
    }
    else if(friends == 1){
        std::cout<<"Go call your best friend"<<std::endl;
    }
    else {
        std::cout<<"You are lucky"<<std::endl;
    }
    return 0;
}
```

### example of nested if,else if and else statement - 

```cpp
#include <iostream>

int main(){

    int friends = 3;

    if(friends > 0){
        if(friends == 1){
            std::cout<<"Go to bike ride"<<std::endl;
        }
        else if(friends == 2){
            std::cout<<"Go for gossips"<<std::endl;
        }
        else if(friends <= 5){
             std::cout<<"Go for long drive"<<std::endl;
        }
        else {
             std::cout<<"Go for group trip"<<std::endl;
        }
    }
    else {
        std::cout<<"Go outside and make new friends"<<std::endl;
    }
    return 0;
}
```

### example of switch statement - 
```cpp
#include <iostream>

int main(){
    int budget = 10000;

    switch(budget){
        case 10000: 
            std::cout<<"Book train ticket"<<std::endl;
            break;
        case 15000:
            std::cout<<"Book ac train ticket"<<std::endl;
            break;
        case 20000:
            std::cout<<"Book cab"<<std::endl;
            break;
        case 30000:
            std::cout<<"Book flight ticket"<<std::endl;
            break;
        default: 
            std::cout<<"Money not enough"<<std::endl;
            break;
        }
}
```

### example of conditional statement - 

(condition) ? [true_statements] : [false_statements];

```cpp
#include <iostream>

int main(){
    int x = 10;
    bool is_even = 
    is_even =  x % 2 == 0 ? true :  false;
    std::cout<<"Is even : "<<is_even<<std::endl;
}
``` 

### example of jump statement-

```cpp
#include <iostream>

int main(){
   int var = 11;
    divide : 
        if(var%2 == 0){
            std::cout<<"even"<<std::endl;
        }
        else {
            std::cout<<"odd added +1"<<std::endl;
            var = var + 1;
            goto divide;
        }
    int var_data = 13;    
    for(int a = 0; a <= 5;a++){
        if(var_data % 2 == 0){
            std::cout<<"even statement stop"<<std::endl;
            break;
        }
        else {
            std::cout<<"odd added +1"<<std::endl;
            var_data = var_data + 1;
            continue;
        }
    }
}
```

