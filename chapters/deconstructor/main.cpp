#include <iostream>
using namespace std;

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

int main()
{
    entity NewObject;
}