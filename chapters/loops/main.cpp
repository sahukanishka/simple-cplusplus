#include <iostream>

int main(){
    //Without loop
    std::cout<<"Hello World without loop"<<std::endl;
    std::cout<<"Hello World without loop"<<std::endl;
    std::cout<<"Hello World without loop"<<std::endl;
    std::cout<<"Hello World without loop"<<std::endl;
    std::cout<<"Hello World without loop"<<std::endl;

    //with for loop
    for(int i = 0;i<5;i++){
        std::cout<<"Hello World with for loop"<<std::endl;
    }

    //with while loop
    int j = 0;
    while(j < 5){
         std::cout<<"Hello World with while loop"<<std::endl;
         j++;
    }

    //with do while loop
    int k = 0;
    do {
        std::cout<<"Hello World with do while loop"<<std::endl;
        k++;
    }while(k < 5);
}
