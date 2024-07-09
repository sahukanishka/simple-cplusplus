# Deconstructor 

When we create class the first things that runs is constructor when the object is created, the same way when object gets destroyed deconstructor is called. In a short deconstructor are the last the is going to called before destroying object.

* Deconstructor are also special member function like constructor but it gets called when object is destroyed. 
* Deconstructor has the same name as constructor but followed by tilde ```~``` sign.
* It is not possible to define more than one deconstructor.
* It does not have any parameters and return type. 
* It automatically called when object goes out of scope. 
* Deconstructor releases memory space occupied by the constructor. 
* In Deconstructor object are destroyed in reverse order of object are created.
* We can use deconstructor to perform the functionalities that we need to perform when class objects destroyed.
* A destructor should be declared in the public section of the class.
  

```

for inside the class
~ <class-name>() {
    // some instructions
}

for outside the class 
<class-name> :: ~<class-name>() {
    // some instructions
}
```

example - 



```cpp

class entity
{
public:
    entity()
    {
        cout << "constructor is called" << endl;
    };

    ~entity()
    {
        cout << "deconstructor is called" << endl;
    };
};


```