# References
References are live creating a alias of any variable. We can create reference by using & sign. Also, we can define a reference variable as a type of variable that can act as a reference to another variable. 

Example :  data_type &ref = variable;

```cpp
#include <iostream>
using namespace std;

int main(){
    int x = 100;
    int& ref = x;

    cout<<"Value of x "<<x<<endl;
    cout<<"Get value of x using reference "<<ref<<endl; 
    //modify the value of x using reference
    ref = ref + 10;
    cout<<"Updated value of x "<<x<<endl;
    cout<<"Updated value of ref "<<ref<<endl;

    return 0;
}
```

### Why we need references - 

1. It save a lot of memory space.
2. Modify the passed value in functions.
3. Avoid copy of data.
4. Can use to modify the elements of vector without copying it.

example - 

```cpp
  //modify the value of vector without copying it
    vector<int> new_vector{10,11,12,13,14,15};
    for(int& x : new_vector){
        x = x + 1;
    }
    for(int x : new_vector){
        cout<<x<<endl;
    }

```


### Rules for reference 
1. We can't declare null reference means after declaring reference we need to assgin it can't be void.
2. Reference variable can not be updated.
3. Name can be as variable name.
4. Declaration of a Reference variable is preceded with the ‘&’ symbol ( but do not read it as “address of”).