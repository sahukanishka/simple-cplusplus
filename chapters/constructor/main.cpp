#include <iostream>
using namespace std;

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

// car::car()
// {
//     cout << "Enter the price : ";
//     cin >> price;
// }

int main()
{
    car mercedes;
    mercedes.getPrice();
    return 0;
}