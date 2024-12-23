# Constructors 

Constructors in c++ are special method that is invoked or called when the instance of class is created. These constructors are generally used to assign the value to the data member of class or perform some functionality when object is created.
In the c++ we can create a constructor by the same name of the class. Constructors are method but they don't have any return type. 

example - 

```cpp
class car
{
public:
    int price;

    car()
    {
        cout << "Enter the price : ";
        cin >> price;
    };
    void getPrice()
    {
        cout << "Car Price is : " << price << endl;
    };
};

int main()
{
    car mercedes;
    mercedes.getPrice();
    return 0;
}
```
Generally we define the constructor inside the class but we can also define it outside the class.

```cpp


class car {
    public :
        int price;
        //constructor declaration
        car();
    void getPrice()
    {
        cout << "Car Price is : " << price << endl;
    };
    
}

car::car(){
    cout << "Enter the price : ";
    cin >> price;
}


```


## Properties of constructors -

1. Name of the constructor is same as class name.
2. It can be defined inside and outside of class  but we need to declare it inside the class in public.
3. Constructors do not return value that why they don't have any return type.
4. Constructors can not be inherited.
5. Address of the constructor cannot be referred to.

## Types of constructors -

1. Default constructors
2. Parameterized constructors
3. Copy constructors
4. Move constructors