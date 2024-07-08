# Classes

Classes are the building block or object [oriented programming](). Lets understand the classes in simpler way. Suppose you want to create a program that can tell the specs of a car. Lets create a bunch of variables to define our car.

```cpp
string brand = "s-class";
int topSpeed = 200;
int price = 999999;
```

As you can see we have car model,engine,price and top speed of car. Suppose we want to create second car with different specs the we need to copy paste all the variables with with new values. Think if we have 100's of these variable and if we want to add new property in car we have to make changes in 100s of car. Here classes will help us.

**Classes**  are nothing but user defined data type with holds its own data member and data functions. These data can be accessed and used by creating a instance of car class.

```cpp
int main()
{
    class Car
    {
    public:
        //data members 
        int price;
        int topSpeed;
        string brand;
        //data function
        int calculateOnRoadPrice(int tax)
        {
            int finalCost = tax + price;
            return finalCost;
        }
    };
}
```

By default class created a private data members and function, means you can access these directly. So if you want to use data members and function to use directly you have to use keyword **public** before initializing variables. 

### How to use class and access its data members and function - 

To use the class we have to create a instance of it. like `ClassName ObjectName;` In the below example we have created a class bmw and assigned the value to its data members. In this class we also have a function that calculates the on road price with tex of that car.

```cpp

 Car bmw;
    bmw.brand = "bmw";
    bmw.price = 99999;
    bmw.topSpeed = 280;

    cout << "Car" << endl;
    cout << "Price : " << bmw.price << endl;
    cout << "Brand : " << bmw.brand << endl;

    int onRoadPrice = bmw.calculateOnRoadPrice(100);
    cout << "On Road Price : " << onRoadPrice << endl;
```

## Next : [Constructor](../constructor/readme.md)