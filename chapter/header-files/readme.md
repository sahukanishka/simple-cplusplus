# Header Files

Sometime we have a common code that we want to use it in different files then we need to split our code for better reusability. We can create a file with extension '.h' or '.hpp' that contains classes, variables, functions, identifiers etc and include it wherever we want in with ```include "example.h"```. Header files help us to write modular and reusable code. 
There are mainly two types of header files are -

1. Standard Library Header files 
2. User Defined

example : 

let's create a file common.h that will contain the definition- 

```cpp
//common.h file

#ifndef lOG
#define lOG
void log(const char* message);
#endif // lOG

```

Lets create a logic of our defined function in common.cpp file - 

```cpp
//common.cpp
#include<iostream>
#include "common.h"

//create multiple functions,classes etc
void log(const char* message){
    std::cout<<"Log : "<< message <<std::endl;
}

```

Lets include our header file and call the function  ```log()```  -

```cpp

//main.cpp
#include <iostream>
#include "common.h"

int main(){
    const char* message = "This is message";
    log(message);
    return 0;
}

```
Now compile and run you will see the printed log. Now the question arrive what is below statement means in common.h - 

```cpp
#ifndef lOG
#define lOG
void log(const char* message);
#endif // lOG
```
### explain common.h header file : 

It means that if and defined lOG do not define again else define the lOG and endif means end if definition. There is new way of doing the same thing that is called ```#pragma once```. 

```cpp
#pragma once
void log(const char* message);

```
### How can i put file common.h in different folder and use if in main.cpp

When you include your header file with ```#include "common.h"``` it means the file is in the same directory or relative to that directory. You can use your file path like ```#include "/Users/kniahkasahu/Documents/code/simple-cpp/common.h"```.

User defined header file start with quotes and system defied or inbuilt header with include with ```< >```. 
