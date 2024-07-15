# Inheritance

Inheritance means getting or taking features or properties from parents. In c++ when we create class so sometimes we found that we need the same features of existing class with some additional things then we use inheritance. Inheritance is most important feature of object oriented programming. Keep in mind that derived class can not access private members of parent class, it can only access public members. 

example syntax - 
```
class  derived_class_name : access-specifier  parent_class_name
{
       //    body ....
};
```
Example in c++

```cpp
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string carKeyToken;

public:
    int price;
    string carModel;

    void getCarData()
    {
        cout << "Price : " << price << endl;
        cout << "Mode Name : " << carModel << endl;
    };
};

class SuvCar : public Car
{
public:
    int numberOfSeats;
    int topSpeed;

    void getSUVDetails()
    {
        cout << "No of Seats : " << numberOfSeats << endl;
        cout << "Top Speed : " << topSpeed << endl;
    }
};

int main()
{

    Car BMWCar;
    BMWCar.carModel = "bmw500";
    BMWCar.price = 99999;

    cout << "class data set" << endl;
    BMWCar.getCarData();

    cout << "--------------------" << endl;

    SuvCar Thar;
    Thar.carModel = "MahindraThar";
    Thar.price = 59999;
    Thar.topSpeed = 320;
    Thar.numberOfSeats = 5;

    Thar.getCarData();
    Thar.getSUVDetails();
}


```

To get the better control in access level there is 3 modes - 

1. Public mode 
2. Private mode 
3. Protected mode 
 