#include <iostream>

int main(){

    //example of if,else if and else statement
    int friends = 6;
    if (friends == 0){
        std::cout<<"Make new friends"<<std::endl;
    }
    else if(friends == 1){
        std::cout<<"Go call your best friend"<<std::endl;
    }
    else {
        std::cout<<"You are lucky"<<std::endl;
    }

    //example of nested if,else if,else statement
    if(friends > 0){
        if(friends == 1){
            std::cout<<"Go to bike ride"<<std::endl;
        }
        else if(friends == 2){
            std::cout<<"Go for gossips"<<std::endl;
        }
        else if(friends <= 5){
             std::cout<<"Go for long drive"<<std::endl;
        }
        else {
             std::cout<<"Go for group trip"<<std::endl;
        }
    }
    else {
        std::cout<<"Go outside and make new friends"<<std::endl;
    }

    //switch statement
    int budget = 10000;

    switch(budget){
        case 10000: 
            std::cout<<"Book train ticket"<<std::endl;
            break;
        case 15000:
            std::cout<<"Book ac train ticket"<<std::endl;
            break;
        case 20000:
            std::cout<<"Book cab"<<std::endl;
            break;
        case 30000:
            std::cout<<"Book flight ticket"<<std::endl;
            break;
        default: 
            std::cout<<"Money not enough"<<std::endl;
        }

    //conditional statement
    int x = 10;
    bool is_even = 
    is_even =  x % 2 == 0 ? true :  false;
    std::cout<<"Is even : "<<is_even<<std::endl;


    int var = 11;
    divide : 
        if(var%2 == 0){
            std::cout<<"even"<<std::endl;
        }
        else {
            std::cout<<"odd added +1"<<std::endl;
            var = var + 1;
            goto divide;
        }
    int vardata = 13;    
    for(int a = 0; a <= 5;a++){
        if(vardata % 2 == 0){
            std::cout<<"even statement stop"<<std::endl;
            break;
        }
        else {
            std::cout<<"odd added +1"<<std::endl;
            vardata = vardata + 1;
            continue;
        }
    }
    return 0;
}

