#include <iostream>
using namespace std;


int main(){
    class Car {
        public:
            int price;
            int topSpeed;
            char brand;

            int calculateOnRoadPrice(int tax){
                int finalCost = tax + price;
                return finalCost;
            }
    };

    Car bmw ;
    bmw.brand = 'bmw';
    bmw.price = 99999;
    bmw.topSpeed = 280;

    cout<<"Car"<<endl;
   
}