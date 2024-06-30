# Pointers
Pointers are nothing but a way to store a memory address of a value. You can store any data type memory address and by pointer you can manipulate the value that is stored in the same memory address.

To declare pointer we use ```*``` sign.
ex. datatype *var_name; 
```cpp
int x = 10;
int *x_pointer = &x;
```
Here x is integer and x_pointer is a pointer and it stores the memory address of int x (&x gives us memory address at which the value of x is stored).

```cpp
 std::cout<<"Memory address of x "<<x_pointer<<std::endl;
 std::cout<<"Value of x from pointer "<<*x_pointer<<std::endl;
```

We can create another pointer that can stored the memory address of pointer that points to variable. In the above example we have x and x_pointer that points to memory address of x now create a new pointer called y_pointer that points to x_pointer. To create this we need to use 2 ```*``` sign.

```cpp
int **y =_pointer = &x_pointer;
std::cout<<"Memory address of x_pointer : "<<y_pointer<<std::endl;
std::cout<<"Value of x_pointer : "<<*y_pointer<<std::endl;
```
### Output - 

```
Memory address of x 0x16bc2ae1c
Value of x from pointer 10
Memory address of x_pointer : 0x16bc2ae10
Value of x_pointer : 0x16bc2ae1c
```
Now you can see the output that x_pointer stores the same memory address as value of y_pointer do. 

