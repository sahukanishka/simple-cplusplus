#include <iostream>
#include <string>

using namespace std;

int main()
{
    class Car
    {
    public:
        int price;
        int topSpeed;
        string brand;

        int calculateOnRoadPrice(int tax)
        {
            int finalCost = tax + price;
            return finalCost;
        }
    };

    Car bmw;
    bmw.brand = "bmw";
    bmw.price = 99999;
    bmw.topSpeed = 280;

    cout << "Car" << endl;
    cout << "Price : " << bmw.price << endl;
    cout << "Brand : " << bmw.brand << endl;

    int onRoadPrice = bmw.calculateOnRoadPrice(100);
    cout << "On Road Price : " << onRoadPrice << endl;

    struct Truck
    {
        int price;
        string model;
        string getPrivateData(const string &value)
        {
            if (value == "engine")
            {
                return engine;
            }
            return "";
        }

        void setPrivateData(const string &value, const string &data)
        {
            if (value == "engine")
            {
                engine = data;
            }
        }

    private:
        string engine;
    };

    Truck tata;
    tata.model = "16wheel";
    tata.price = 1999999;
    tata.setPrivateData("engine", "12hrs");

    cout << "Price : " << tata.price << endl;
    cout << "Brand : " << tata.model << endl;
    cout << "Engine : " << tata.getPrivateData("engine") << endl;
}