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